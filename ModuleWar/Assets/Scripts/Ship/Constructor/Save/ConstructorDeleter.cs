using Ship.SaveLoad;
using System.IO;
using UI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Localization;

namespace Assets.Scripts.Ship.Constructor.Save
{
    internal class ConstructorDeleter : MonoBehaviour
    {
        [SerializeField] private ShipPreviewButtonSelector _buttonSelector;

        [Space]

        private ConstructorShipPreview _currentPreview;

        [SerializeField] private UnityEvent _onButtonClicked;

        [Space]

        [SerializeField] private LocalizedString _noFound;
        [SerializeField] private ErrorThrower _thrower;

        private void Start()
        {
            _buttonSelector.OnDeleteButtonClicked += ButtonClicked;
        }

        private void ButtonClicked(ConstructorShipPreview preview)
        {
            _currentPreview = preview;

            _onButtonClicked?.Invoke();
        }

        public void Confirm()
        {
            if (!Delete(_currentPreview.TextMesh.text))
            {
                _thrower.ThrowError(_noFound.GetLocalizedString());
            }

            _buttonSelector.UpdateList();
        }
        public bool Delete(string filename)
        {
            var file = SavesPath.Path + filename + ".json";
            if (File.Exists(file))
            {
                File.Delete(file);
                return true;
            }

            return false;
        }
    }
}
