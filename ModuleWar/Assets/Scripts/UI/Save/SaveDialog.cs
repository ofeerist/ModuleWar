using System.IO;
using Ship.SaveLoad;
using TMPro;
using UnityEngine;
using UnityEngine.Localization;

namespace UI.Save
{
    public class SaveDialog : MonoBehaviour
    {
        [SerializeField] private GroupTransition _blackTransition;
        [SerializeField] private GroupTransition _dialogTransition;

        [Space]

        [SerializeField] private SaveListUpdater _saveListUpdater;

        [SerializeField] private TMP_InputField _input;
        [SerializeField] private ShipSaver _shipSaver;

        [Space]

        [SerializeField] private LocalizedString _noValidName;
        [SerializeField] private ErrorThrower _thrower;

        public void ActivateDialog()
        {
            _blackTransition.ToBlack();
            _dialogTransition.ToBlack();

            _saveListUpdater.UpdateList();
        }

        public void DeactivateDialog()
        {
            _blackTransition.ToTransparent();
            _dialogTransition.ToTransparent();
        }

        public void Save()
        {
            var name = _input.text;

            if (name.Length == 0)
            {
                _thrower.ThrowError(_noValidName.GetLocalizedString());
                return;
            }

            var json = _shipSaver.SaveShip();
            File.WriteAllText(SavesPath.Path + name + ".json", json);

            _saveListUpdater.UpdateList();

            DeactivateDialog();
        }
    }
}
