using UnityEngine;
using UnityEngine.Rendering.Universal;
using TMPro;

namespace Assets.Scripts.UI.Settings
{
    internal class AntiAlasingChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private TMP_Dropdown _dropdown;
        [SerializeField] private UniversalRenderPipelineAsset _data;

        private readonly int[] antiAliasing = { 1, 2, 4, 8 };

        [SerializeField] private int _id;
        int ISettingPoint.Id { get => _id; }

        private void Start()
        {
            _dropdown.onValueChanged.AddListener((value) =>
            {
                UpdateData();
            });

            UpdateData();
        }

        public void UpdateData()
        {
            _data.msaaSampleCount = antiAliasing[_dropdown.value];
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
