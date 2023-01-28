using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Save
{
    internal class SaveToggleSelector : MonoBehaviour
    {
        [SerializeField] private List<SaveToggle> _toggles;
        public event Action<SaveToggle> OnToggleSelected;

        public SaveToggle ActiveToggle { get; private set; }

        [SerializeField] private SaveListUpdater _updater;
        [SerializeField] private ToggleGroup _toggleGroup;
        [SerializeField] private DeleteAnimator _deleteAnimator;

        private void Start()
        {
            foreach (var toggle in _toggles)
                AddListenerToToggle(toggle);

            _updater.OnSaveAdded += (toggle) =>
            {
                _toggles.Add(toggle);
                AddListenerToToggle(toggle);
            };
        }

        private void AddListenerToToggle(SaveToggle toggle)
        {
            toggle.group = _toggleGroup;
            toggle.onValueChanged.AddListener((state) =>
            {
                ActivateToggle(toggle, state);
            });
        }
        public void ActivateToggle(SaveToggle toggle, bool state)
        {
            toggle.ToggleAnimator.Highlight(state);

            if (state)
            {
                ActiveToggle = toggle;
                OnToggleSelected?.Invoke(toggle);
            }

            _deleteAnimator.Highlight(_toggleGroup.AnyTogglesOn());
        }

        public void Delete(SaveToggle toggle)
        {
            _toggles.Remove(toggle);
            Destroy(toggle.gameObject);

            _deleteAnimator.Highlight(_toggleGroup.AnyTogglesOn());
        }
    }
}

