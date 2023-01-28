using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace UI.MainMenu
{
    internal class ShipPreviewSelector : MonoBehaviour
    {
        [SerializeField] private ShipPreviewer _previewer;
        [SerializeField] private ToggleGroup _group;

        [SerializeField] private List<ShipPreview> _previews = new();

        public event Action<ShipPreview> OnToggleSelected;
        public event Action OnAnyToggleUnselected;

        public ShipPreview ActivePreview { get; private set; }
        private void Start()
        {
            _previewer.OnPreviewAdded += (preview) =>
            {
                preview.Toggle.onValueChanged.AddListener((state) =>
                {
                    ActivateToggle(preview, state);
                });

                _previews.Add(preview);
            };


            _previewer.OnPreviewAddingEnd += () =>
            {
                var groups = new List<CanvasGroup>();
                foreach (var preview in _previews)
                    groups.Add(preview.CanvasGroup);

                foreach (var preview in _previews)
                {
                    groups.Remove(preview.CanvasGroup);
                    preview.MenuButton.Groups = groups;
                    groups.Add(preview.CanvasGroup);
                }

                ActivateToggle(_previews[0], true);
            };
        }

        public void ActivateToggle(ShipPreview preview, bool state)
        {
            if (ActivePreview != preview && state)
                preview.MenuButton.Toggle(state);

            if (state)
            {
                preview.Toggle.isOn = true;
                ActivePreview = preview;
                OnToggleSelected?.Invoke(preview);

                return;
            }

            preview.MenuButton.Toggle(state);

            if(!_group.AnyTogglesOn())
                OnAnyToggleUnselected?.Invoke();
        }
    }
}
