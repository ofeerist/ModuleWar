using System.IO;
using Ship.SaveLoad;
using UnityEngine;
using UnityEngine.Localization;

namespace UI.Save
{
    public class SaveDeleter : MonoBehaviour
    {
        [SerializeField] private SaveToggleSelector _selector;

        [Space]

        [SerializeField] private LocalizedString _noFileError;
        [SerializeField] private ErrorThrower _thrower;

        public void DeleteActiveToggle()
        {
            var toggle = _selector.ActiveToggle;
            if (toggle == null) return;

            if (!Delete(toggle.TextMesh.text))
            {
                _thrower.ThrowError(_noFileError.GetLocalizedString());
            }
            _selector.Delete(toggle);
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
