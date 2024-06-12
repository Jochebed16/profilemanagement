using System.ComponentModel.DataAnnotations;

namespace PM_Blazor.PMDbContext
{
	public class SyncData
	{
		[Key]
		public int Id { get; set; }
		public int OperationId { get; set; }
		public string SerializedData { get; set; } = null!;
		public DateTime CreatedAt { get; set; }


	}
}
