using UnityEngine;

namespace Assets.Scripts.UI.Settings
{
    internal class RadarTurnerChanger : MonoBehaviour, ISettingPoint
    {
        [SerializeField] private UnityEngine.UI.Toggle _toggle;
        [SerializeField] private GameObject[] _radarObjects;

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
            Turn(_toggle.isOn);
        }

        private void Turn(bool state)
        {
            foreach (var item in _radarObjects)
                item.SetActive(state);
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
