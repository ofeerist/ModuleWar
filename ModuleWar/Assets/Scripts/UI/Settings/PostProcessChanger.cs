using TMPro;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.UI;

namespace Assets.Scripts.UI.Settings
{
    internal class PostProcessChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private UnityEngine.UI.Toggle _toggle;
        [SerializeField] private Renderer2DData _data;
        [SerializeField] private PostProcessData _processData;

        [SerializeField] private int _id;
        int ISettingPoint.Id { get => _id; }

        private void Start()
        {
            _toggle.onValueChanged.AddListener((value) =>
            {
                UpdateData();
            });

            UpdateData();
        }

        public void UpdateData()
        {
            var prop = _data.GetType().GetField("m_PostProcessData",
                    System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
            prop.SetValue(_data, _toggle.isOn ? _processData : null);

            _data.SetDirty();
        }

        public void Load(object value)
        {
            _toggle.isOn = System.Convert.ToBoolean(value);
        }

        public object Save()
        {
            return _toggle.isOn;
        }
    }
}
