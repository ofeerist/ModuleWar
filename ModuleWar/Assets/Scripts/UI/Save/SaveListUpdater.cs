using System;
using System.IO;
using Ship.SaveLoad;
using UnityEngine;

namespace UI.Save
{
    internal class SaveListUpdater : MonoBehaviour
    {
        [SerializeField] private SaveToggle _saveNamesPrefab;
        [SerializeField] private Transform _saveNamesParent;

        public Action<SaveToggle> OnSaveAdded;

        public void UpdateList()
        {
            for (int i = 0; i < _saveNamesParent.childCount; i++)
                Destroy(_saveNamesParent.GetChild(i).gameObject);

            var saves = Directory.GetFiles(SavesPath.Path, "*.json");
            foreach (var save in saves)
                AddToggle(save.Replace(SavesPath.Path, "").Replace(".json", ""));
        }

        private void AddToggle(string name)
        {
            var toggle = Instantiate(_saveNamesPrefab, _saveNamesParent);
            toggle.TextMesh.text = name;

            OnSaveAdded?.Invoke(toggle);
        }
    }
}
