using System;
using System.Collections.Generic;
using System.IO;
using Ship.SaveLoad;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace UI.MainMenu
{
    internal class ShipPreviewer : MonoBehaviour
    {
        [SerializeField] private ToggleGroup _group;
        [SerializeField] private ShipPreviewCreator _creator;

        [Space]

        [SerializeField] private Transform _parent;
        [SerializeField] private ShipPreview _prefab;

        [SerializeField] private List<GameObject> DestroyExceptions;


        private void Start()
        {
            UpdateList();   
        }

        public Action<ShipPreview> OnPreviewAdded;
        public Action OnPreviewAddingEnd;

        private readonly CompositeDisposable _disposable = new();

        public void UpdateList()
        {
            _disposable.AddTo(this);

            for (int i = 0; i < _parent.childCount; i++)
            {
                var child = _parent.GetChild(i).gameObject;

                if (DestroyExceptions.Contains(child)) continue;

                Destroy(child);
            }

            var saves = Directory.GetFiles(SavesPath.Path, "*.json");

            if (saves.Length == 0) return;

            var j = 0;
            foreach (var save in saves)
                _disposable.Add(Observable.TimerFrame(j++).Subscribe(x => AddToggle(save)));

            _disposable.Add(Observable.TimerFrame(saves.Length).Subscribe(x =>
            {
                _disposable.Clear();
                OnPreviewAddingEnd?.Invoke();
            }));
        }

        private void AddToggle(string file)
        {
            var toggle = Instantiate(_prefab, _parent);
            toggle.TextMesh.text = file.Replace(SavesPath.Path, "").Replace(".json", "");

            var save = JsonUtility.FromJson<ShipSave>(File.ReadAllText(file));
            toggle.Save = save;

            toggle.RawImage.texture = _creator.CreatePreview(save);

            toggle.Toggle.group = _group;

            OnPreviewAdded?.Invoke(toggle);
        }
    }
}
