using Microsoft.EntityFrameworkCore;
namespace PM_Blazor.PMDbContext
{
    public class PmdbContext : DbContext
    {
        public PmdbContext(DbContextOptions<PmdbContext> options)
       : base(options)
        {
        }

        public virtual DbSet<Profile> Profiles { get; set; } = null;
        public virtual DbSet<SyncData> SyncDatas { get; set; } = null;
        
        
    }
}
