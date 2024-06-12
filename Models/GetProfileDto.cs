namespace PM_Blazor.Models
{
    public class GetProfileDto
    {
        public int Id { get; set; } 
        public string Name { get; set; } = string.Empty;
        public string Contact { get; set; } = string.Empty;
        public string Email { get; set; } = string.Empty;
    }
}
