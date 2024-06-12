namespace PM_Blazor.Responses
{
    public class ResponseMessage
    {
        public bool Result { get; set; }
        public bool IsServerOnline { get; set; }
        public string? Message { get; set; }
    }
}
