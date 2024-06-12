using PM_Blazor.PMDbContext;
using SqliteWasmHelper;
using System.Data.Common;
using System.Net.Http.Json;
using Microsoft.EntityFrameworkCore;

namespace PM_Blazor.Services.SynchronizationService
{
	public class SyncService
	{
		private readonly ISqliteWasmDbContextFactory<PmdbContext> _contextFactory;
		private readonly ILogger<SyncService> _logger;
		private readonly HttpClient _client;




		public SyncService(ISqliteWasmDbContextFactory<PmdbContext> contextFactory, ILogger<SyncService> logger, HttpClient client)
		{
			_contextFactory = contextFactory;
			_logger = logger;
			_client = client;
		}
		//Save Unsynchronized data to cache
		public async Task SaveUnSynchronizedDataToCacheAsync(SyncData syncData)
			{
				using var context = await _contextFactory.CreateDbContextAsync();

				await context.SyncDatas.AddAsync(syncData);
				await context.SaveChangesAsync();
				_logger.LogInformation("Unsynchronized data saved to cache.");
			}


			//Check if there data to synchronize to server
			public async Task<int> CheckIfSyncDataExistInCacheAsync()
			{
				using var context = await _contextFactory.CreateDbContextAsync();
				return await context.SyncDatas.CountAsync();
			}

			//Delete all data from cache
			private async Task TruncateAsync()
			{

				using var context = await _contextFactory.CreateDbContextAsync();
				using DbCommand cmd = context.Database.GetDbConnection().CreateCommand();
				cmd.CommandText = "Delete from SyncDatas;";
				await context.Database.OpenConnectionAsync();
				await cmd.ExecuteNonQueryAsync();
				await context.Database.CloseConnectionAsync();

			}

			//Sent Unsynchronized data to server
			public async Task<bool> SynchronizeAsync()
			{
				using var context = await _contextFactory.CreateDbContextAsync();
				var UnsyncData = await context.SyncDatas.ToListAsync();
				var response = await _client.PostAsJsonAsync<List<SyncData>>("api/Sync", UnsyncData);
				if (response.IsSuccessStatusCode)
				{
					await context.Database.ExecuteSqlRawAsync("Delete from SyncDatas");
					return true;
				}
				return false;
			}
		}
	
}
