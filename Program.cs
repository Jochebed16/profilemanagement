using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Microsoft.EntityFrameworkCore;
using MudBlazor.Services;
using PM_Blazor;
using PM_Blazor.PMDbContext;
using SqliteWasmHelper;
using PM_Blazor.Services.CacheServices;
using PM_Blazor.Services.ServerServices;
using PM_Blazor.Services.SynchronizationService;


var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddMudServices();
builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri("https://localhost:7297/") });
builder.Services.AddSqliteWasmDbContextFactory<PmdbContext>(
  opts => opts.UseSqlite("Data Source=pmdb.sqlite3"));

builder.Services.AddScoped<CacheProfileService>();
builder.Services.AddScoped<ServerProfileService>();
builder.Services.AddScoped<SyncService>();
builder.Services.AddScoped<ServerProfileService>();

await builder.Build().RunAsync();






