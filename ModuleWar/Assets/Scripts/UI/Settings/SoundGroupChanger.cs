
using TMPro;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

namespace Assets.Scripts.UI.Settings
{
    internal class SoundGroupChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private Slider _slider;
        [SerializeField] private AudioMixer _mixer;
        [SerializeField] private string _exposedParameter;

        [SerializeField] private int _id;

        [SerializeField] private TextMeshProUGUI _textMesh;

        int ISettingPoint.Id { get => _id; }

        private void Start()
        {
            _slider.onValueChanged.AddListener((value) =>
            {
                UpdateData();
            });

            UpdateData();
        }

        public void UpdateData()
        { 
            _mixer.SetFloat(_exposedParameter, Mathf.Log10(_slider.value) * 20);

            _textMesh.text = System.Math.Round(_slider.value, 2).ToString() + "x";
        }

        public void Load(object value)
        {
            _slider.value = System.Convert.ToSingle(value);
        }

        public object Save()
        {
            return _slider.value;
        }
    }
}
