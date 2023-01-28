namespace Assets.Scripts.UI.Settings
{
    internal interface ISettingPoint
    {
        int Id { get; }
        void UpdateData();
        void Load(object value);
        object Save();
    }
}
