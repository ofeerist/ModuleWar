using TMPro;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.UI;

namespace Assets.Scripts.UI.Settings
{
    internal class ShadowChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private Slider _slider;
        [SerializeField] private TextMeshProUGUI _textMesh;
        [SerializeField] private Renderer2DData _data;

        [SerializeField] private int _id;
        int ISettingPoint.Id { get => _id; }

        private void Start()
        {
            _slider.onValueChanged.AddListener((value) =>
            {
                _textMesh.text = System.Math.Round(value, 2).ToString() + "x";

                UpdateData();
            });

            UpdateData();

            _textMesh.text = System.Math.Round(_slider.value, 2).ToString() + "x";
        }

        public void UpdateData()
        {
            var prop = _data.GetType().GetField("m_LightRenderTextureScale",
                    System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
            prop.SetValue(_data, _slider.value);

            _data.SetDirty();
        }

        public void Load(object value)
        {
            _slider.value = System.Convert.ToSingle(value);

            UpdateData();
        }

        public object Save()
        {
            return _slider.value;
        }
    }
}
