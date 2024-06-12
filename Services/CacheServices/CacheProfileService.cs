using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Internal;
using PM_Blazor.Models;
using PM_Blazor.PMDbContext;
using PM_Blazor.Services.ServerServices;
using SqliteWasmHelper;
namespace PM_Blazor.Services.CacheServices
{
    public class CacheProfileService
    {
        private readonly ISqliteWasmDbContextFactory<PmdbContext> _contextFactory;

        private ILogger<CacheProfileService> _logger;
        private ServerProfileService _serverProfileService;


        public CacheProfileService(ISqliteWasmDbContextFactory<PmdbContext> contextFactory, ILogger<CacheProfileService> logger, ServerProfileService serverProfileService)
        {
            _contextFactory = contextFactory;
            _logger = logger;
            _serverProfileService = serverProfileService;
        }

        public async Task<List<GetProfileDto>> GetProfilesFromCacheAsync()
        {
            //Create a new Context of the cache
            _logger.LogInformation("Profiles from cache");
            using var context = await _contextFactory.CreateDbContextAsync();
            if(context.Profiles.Any())
            {
                List<Profile> profiles = await context.Profiles.ToListAsync();
                List<GetProfileDto> getProfiles =  profiles.Select(x => new GetProfileDto
                {
                    Id = x.Id,
                    Name = x.Name,
                    Contact = x.Contact,
                    Email = x.Email

                }).ToList();

                return getProfiles;
            }
            return new List<GetProfileDto>();
        }


        //Get a profile data from cache
        public async Task<GetProfileDto> GetProfileAsync(int profileId)
        {
            _logger.LogInformation("Profiles from cache");
           using var context = await _contextFactory.CreateDbContextAsync();

            if(context.Profiles.Any())
            {
                Profile profile = await context.Profiles.Where(x => x.Id == profileId).FirstOrDefaultAsync();
                    GetProfileDto getProfileDto = new()
                    {
                        Id = profileId,
                        Name = profile.Name,
                        Contact = profile.Contact,
                        Email = profile.Email

                    };

                return getProfileDto;
            }

            return new GetProfileDto();
        }

        //Add profile to cache

        public async Task<bool> AddProfileToCacheAsync(AddProfileDto addProfileDto)
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

        //Update profile in cache
        public async Task<bool> UpdateProfileToCacheAsync(int profileId,AddProfileDto addProfileDto)
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

        //Delete profile in cache
        public async Task<bool> DeleteProfileInCacheAsync(int profileId)
        {
            _logger.LogInformation("Deleting profile in cache");
            using var context = await _contextFactory.CreateDbContextAsync();
            Profile profile = await context.Profiles.Where(x => x.Id == profileId).FirstOrDefaultAsync();
            if (profile == null) return false;
            context.Profiles.Remove(profile);
            await context.SaveChangesAsync();
            return true;
        }


        public async Task SeedCacheData()
        {
            //Create new context if it doesn't exist in cache
            using var context = await _contextFactory.CreateDbContextAsync();
            if (await context.Profiles.CountAsync() is 0)
            {
                //Get product from server and add to cache
                var getProfileFromServer = await _serverProfileService.GetProfilesFromServerAsync();
                foreach (var profile in getProfileFromServer)
                {
                    AddProfileDto model = new()
                    {
                        Name = profile.Name,
                        Contact = profile.Contact,
                        Email = profile.Email
                    };

                    await AddProfileToCacheAsync(model);
                }
            }

        }



	}
}
