using Ship.SaveLoad;
using System.IO;
using UI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Localization;

namespace Assets.Scripts.Ship.Constructor.Save
{
    internal class ConstructorLoader : MonoBehaviour
    {
        [SerializeField] private ShipPreviewButtonSelector _buttonSelector;

        [SerializeField] private ShipConstructorLoader _shipLoader;

        [Space]

        private ConstructorShipPreview _currentPreview;

        [SerializeField] private UnityEvent _onButtonClicked;

        [Space]

        [SerializeField] private LocalizedString _noFound;
        [SerializeField] private ErrorThrower _thrower;

        private void Start()
        {
            _buttonSelector.OnButtonClicked += ButtonClicked;
        }

        private void ButtonClicked(ConstructorShipPreview preview)
        {
            _currentPreview = preview;

            _onButtonClicked?.Invoke();
        }

        public void Confirm()
        {
            Load(_currentPreview.TextMesh.text);
        }
        public void Load(string name)
        {
            var file = SavesPath.Path + name + ".json";
            var save = JsonUtility.FromJson<ShipSave>(File.ReadAllText(file));
            _shipLoader.SaveLoad(save);
        }
    }
}
