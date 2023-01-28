using System.IO;
using Ship.SaveLoad;
using UnityEngine;

namespace UI.Save
{
    public class LoadDialog : MonoBehaviour
    {
        [SerializeField] private GroupTransition _blackTransition;
        [SerializeField] private GroupTransition _dialogTransition;

        [Space]

        [SerializeField] private SaveToggleSelector _selector;
        [SerializeField] private SaveListUpdater _saveListUpdater;
        [SerializeField] private ShipConstructorLoader _shipLoader;

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

        public void Load()
        {
            var file = SavesPath.Path + _selector.ActiveToggle.TextMesh.text + ".json";
            var save = JsonUtility.FromJson<ShipSave>(File.ReadAllText(file));
            _shipLoader.SaveLoad(save);

            DeactivateDialog();
        }
    }
}
