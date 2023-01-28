using Ship.SaveLoad;
using System;
using System.IO;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Localization;

namespace Assets.Scripts.Ship.Constructor.Save
{
    internal class ConstructorSaver : MonoBehaviour
    {
        [SerializeField] private ShipPreviewButtonSelector _buttonSelector;

        [Space]

        [SerializeField] private ConstructorShipPreview _newPreview;
        private ConstructorShipPreview _currentPreview;

        [SerializeField] private UnityEvent _onButtonClicked;
        [SerializeField] private UnityEvent _onNewButtonClicked;

        [Space]

        [SerializeField] private TMP_InputField _input;
        [SerializeField] private ShipSaver _saver;

        [Space]

        [SerializeField] private LocalizedString _noValidName;
        [SerializeField] private ErrorThrower _thrower;

        private void Start()
        {
            _buttonSelector.OnButtonClicked += ButtonClicked;
            _newPreview.Button.onClick.AddListener(() => ButtonClicked(_newPreview));
        }

        private void ButtonClicked(ConstructorShipPreview preview)
        {
            _currentPreview = preview;

            if (preview != _newPreview)
                _onButtonClicked?.Invoke();
            else
                _onNewButtonClicked?.Invoke();
        }

        public void Confirm()
        {
            if (_currentPreview == _newPreview)
            {
                Save(_input.text);
                return;
            }

            Save(_currentPreview.TextMesh.text);
        }

        private void Save(string name)
        {
            if (name.Length == 0)
            {
                _thrower.ThrowError(_noValidName.GetLocalizedString());
                return;
            }

            var json = _saver.SaveShip();
            File.WriteAllText(SavesPath.Path + name + ".json", json);

            _buttonSelector.UpdateList();
        }
    }
}
