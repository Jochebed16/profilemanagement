using Microsoft.EntityFrameworkCore;
using PM_Blazor.Models;
using PM_Blazor.PMDbContext;
using SqliteWasmHelper;
using Newtonsoft.Json;
using System.Net.Http.Json;
using PM_Blazor.Responses;
using PM_Blazor.Services.SynchronizationService;

namespace PM_Blazor.Services.ServerServices
{
    public class ServerProfileService
    {
        private HttpClient _client;
        private ILogger<ServerProfileService> _logger;
        private readonly ISqliteWasmDbContextFactory<PmdbContext> _contextFactory;
        private readonly SyncService _syncService;
		public ServerProfileService(HttpClient client, ILogger<ServerProfileService> logger,
			ISqliteWasmDbContextFactory<PmdbContext> contextFactory, SyncService syncService)
		{
			_client = client;
			_logger = logger;
			_contextFactory = contextFactory;
			_syncService = syncService;
		}

		//Get profile from server
		public async Task<List<GetProfileDto>> GetProfilesFromServerAsync()
        {
            try
            {
               
                var responseMessage = await _client.GetAsync("api/Profile");
                if (responseMessage.IsSuccessStatusCode)
                {
                    _logger.LogInformation("List of profiles from server");
                    string apiData = await responseMessage.Content.ReadAsStringAsync();
                    return JsonConvert.DeserializeObject<List<GetProfileDto>>(apiData);
                }

                return new List<GetProfileDto>();
            }
            catch (HttpRequestException reqex)
            {
                _logger.LogInformation($"Server unavailable");
                _logger.LogError(reqex.Message);

                return new List<GetProfileDto>();
            }
        }


        //Get profile by Id from server
        public async Task<GetProfileDto> GetProfileByIdFromServerAsync(int profileId) 
        {
            try
            {
                var getProduct = await _client.GetFromJsonAsync<GetProfileDto>($"api/Profile/{profileId}");
                if (getProduct != null)
                {
                    _logger.LogInformation($"Profile is from server.");
                    return getProduct;
                }
                _logger.LogInformation($"Server available, profile does not exist in server.");
                return new GetProfileDto();
            }
            catch (HttpRequestException reqex)
            {
                _logger.LogInformation($"Server unavailable, get profile from cache.");

                return null;
            }
        }


        //Add profile to server
        public async Task<ResponseMessage> AddProfileToServerAsync(AddProfileDto model)
        {
            //Here,Whether server is online or offline, save a copy of server data into cache.
            try
            {
                //Send to server
                var response = await _client.PostAsJsonAsync<AddProfileDto>("api/Profile", model);
                if (response.IsSuccessStatusCode)
                {
                    //Save a copy to cache
                    await AddNewProfileDataCacheAsync(model);

                  

					return new ResponseMessage()
                    {
                        Result = true,
                        IsServerOnline = true,
                        Message = "New profile successfully added."
                    };
                }
                return new ResponseMessage()
                {
                    Result = false,
                    IsServerOnline = true,
                    Message = "Sorry, something wrong happened at the server."
                };
            }
            catch (HttpRequestException reqex)
            {
                _logger.LogInformation($"Server is unavailable");
                //Save data to cache
                await AddNewProfileDataCacheAsync(model);

				//Save unsynchronized data here
				GetProfileDto profile = new()
				{
					Id = 0,
					Name = model.Name,
					Contact = model.Contact,
					Email = model.Email
				};

				string serialdata = JsonConvert.SerializeObject(profile);
				SyncData syncData = new()
				{
					OperationId = 1,
					SerializedData = serialdata,
					CreatedAt = DateTime.Now
				};

				await _syncService.SaveUnSynchronizedDataToCacheAsync(syncData);

				return new ResponseMessage()
                {
                    Result = true,
                    IsServerOnline = false,
                    Message = "New profile successfully added."
                };
            }

        }

        //Add profile to cache
        public async Task<bool> AddNewProfileDataCacheAsync(AddProfileDto addProfileDto) 
        {
            if (addProfileDto == null) return false;

            _logger.LogInformation("Add profile to cache");
            using var context = await _contextFactory.CreateDbContextAsync();

            Profile profile = new()
            {
                Name = addProfileDto.Name,
                Contact = addProfileDto.Contact,
                Email = addProfileDto.Email
            };
            await context.Profiles.AddAsync(profile);
            await context.SaveChangesAsync();
            return true;
        }


        //Update product in Server
        public async Task<ResponseMessage> UpdateProfileInServer(int id, AddProfileDto model)
        {
            try
            {
                var response = await _client.PutAsJsonAsync<AddProfileDto>($"api/Profile/{id}", model);

                if (response.IsSuccessStatusCode)
                {
                    //Update the copy in cache
                    await UpdateProfileToCacheAsync(id, model);

                    return new ResponseMessage()
                    {
                        Result = true,
                        IsServerOnline = true,
                        Message = "Profile successfully updated!"
                    };
                }
                return new ResponseMessage()
                {
                    Result = false,
                    IsServerOnline = true,
                    Message = "Sorry! something wrong happened at the server."
                };

            }
            catch (HttpRequestException reqex)
            {
                string query = string.Empty;

                _logger.LogInformation($"Server is unavailable");
                //Update the copy in cache
                await UpdateProfileToCacheAsync(id, model);

				//save unsync data here

				GetProfileDto profile = new()
				{
					Id = id,
					Name = model.Name,
					Contact = model.Contact,
					Email = model.Email
				};

				string serialdata = JsonConvert.SerializeObject(profile);
				SyncData syncData = new()
				{
					OperationId = 3,
					SerializedData = serialdata,
					CreatedAt = DateTime.Now
				};

				await _syncService.SaveUnSynchronizedDataToCacheAsync(syncData);

				return new ResponseMessage()
                {
                    Result = true,
                    IsServerOnline = false,
                    Message = "Profile successfully updated!"
                };
            }
        }


        //Update profile in cache
        private async Task<bool> UpdateProfileToCacheAsync(int profileId, AddProfileDto addProfileDto)
        {
            _logger.LogInformation("Update profile in cache.");
            using var context = await _contextFactory.CreateDbContextAsync();
            Profile profile = await context.Profiles.Where(x => x.Id == profileId).FirstOrDefaultAsync();
            if (profile == null) return false;
            profile.Name = addProfileDto.Name;
            profile.Contact = addProfileDto.Contact;
            profile.Email = addProfileDto.Email;
            context.Profiles.Update(profile);
            await context.SaveChangesAsync();
            return true;
        }

        //Delete profile from server and then cache
        public async Task<ResponseMessage> DeleteProfileFromServerAsync(int id)
        {

            try 
            {
                //Delete product from server
                var response = await _client.DeleteAsync($"api/Profile/{id}");
                if (response.IsSuccessStatusCode)
                {
                    //delete the one in cache
                    await RemoveProfileInCacheAsync(id); 

                    return new ResponseMessage()
                    {
                        Result = true,
                        IsServerOnline = true,
                        Message = "Profile successfully deleted!"
                    };
                }
                return new ResponseMessage()
                {
                    Result = false,
                    IsServerOnline = true,
                    Message = "Sorry! something wrong happened at the server."
                };
            }
            catch (HttpRequestException reqex)
            {
                _logger.LogInformation($"Server is unavailable");
                //Delete profile from cache
                await RemoveProfileInCacheAsync(id);

				//save unsync data here
				GetProfileDto profile = new()
				{
					Id = id,
					Name = "profile",
					Contact = "0273666",
					Email = "abc@gmail.com"
				};

				string serialdata = JsonConvert.SerializeObject(profile);
				SyncData syncData = new()
                {
                    Id = id,
                    OperationId = 2,
                    SerializedData = serialdata,
                    CreatedAt = DateTime.Now
                };

                await _syncService.SaveUnSynchronizedDataToCacheAsync(syncData);

                return new ResponseMessage()
                {
                    Result = true,
                    IsServerOnline = false,
                    Message = "Profile successfully deleted!"
                };
            }

        }

        public async Task<bool> RemoveProfileInCacheAsync(int profileId)
        {
            _logger.LogInformation("Deleting profile in cache");
            using var context = await _contextFactory.CreateDbContextAsync();
            Profile profile = await context.Profiles.Where(x => x.Id == profileId).FirstOrDefaultAsync();
            if (profile == null) return false;
            context.Profiles.Remove(profile);
            await context.SaveChangesAsync();
            return true;
        }

    }
}
