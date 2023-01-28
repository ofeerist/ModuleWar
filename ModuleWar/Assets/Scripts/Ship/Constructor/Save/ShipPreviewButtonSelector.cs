using Ship.SaveLoad;
using System;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UI;
using UI.MainMenu;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Localization;

namespace Assets.Scripts.Ship.Constructor.Save
{
    internal class ShipPreviewButtonSelector : MonoBehaviour
    {
        [SerializeField] private ShipPreviewer _previewer;

        [SerializeField] private List<ConstructorShipPreview> _previews = new();

        public event Action<ConstructorShipPreview> OnButtonClicked;
        public event Action<ConstructorShipPreview> OnDeleteButtonClicked;

        private void Start()
        {
            _previewer.OnPreviewAdded += (preview) =>
            {
                if (preview is not ConstructorShipPreview cpreview) return;

                cpreview.Button.onClick.AddListener(() => ButtonClicked(cpreview));
                cpreview.DeleteButton.onClick.AddListener(() => DeleteButtonClicked(cpreview));

                _previews.Add(cpreview);
            };
        }

        private void DeleteButtonClicked(ConstructorShipPreview preview)
        {
            OnDeleteButtonClicked?.Invoke(preview);
        }

        private void ButtonClicked(ConstructorShipPreview preview)
        {
            OnButtonClicked?.Invoke(preview);
        }

        public void UpdateList()
        {
            _previewer.UpdateList();
        }
    }
}
