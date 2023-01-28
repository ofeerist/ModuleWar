using UnityEngine;
using TMPro;
using UnityEngine.Localization.Settings;
using UniRx;

namespace Assets.Scripts.UI.Settings
{
    internal class LanguageChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private TMP_Dropdown _dropdown;
        [SerializeField] private int _id;
        int ISettingPoint.Id { get => _id; }

        private readonly SerialDisposable _serialDisposable = new();

        private void Start()
        {
            _serialDisposable.AddTo(this);

            _dropdown.onValueChanged.AddListener((value) =>
            {
                UpdateData();
            });
            
            UpdateData();
        }

        public void UpdateData()
        {
            _serialDisposable.Disposable = Observable.NextFrame().Subscribe(x =>
            {
                LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[_dropdown.value];
            });
        }

        public void Load(object value)
        {
            var v = System.Convert.ToInt32(value);

            _dropdown.value = v;
            
            UpdateData();
        }

        public object Save()
        {
            return _dropdown.value;
        }
    }
}
