using System;
using UniRx;
using UnityEngine;



namespace UI.Toggle
{
    public class ToggleSelector : MonoBehaviour
    {
        [SerializeField] private ToggleExtended[] _toggles;
        public event Action<ToggleExtended> OnToggleSelected;

        public ToggleExtended ActiveToggle { get; private set; }
        private void Start()
        {
            foreach (var toggle in _toggles)
                toggle.onValueChanged.AddListener((state) => 
                {
                    ActivateToggle(toggle, state);
                });

            Observable.NextFrame().Subscribe(x =>
            {
                _toggles[0].isOn = true;
                ActiveToggle = _toggles[0];

                OnToggleSelected?.Invoke(_toggles[0]);

                _toggles[0].ToggleAnimator.Highlight(true);
            }).AddTo(this);
        }

        public void ActivateToggle(ToggleExtended toggle, bool state)
        {
            if (ActiveToggle != toggle && state)
                toggle.ToggleAnimator.Highlight(state);

            if (state)
            {
                toggle.isOn = true;
                ActiveToggle = toggle;
                OnToggleSelected?.Invoke(toggle);

                return;
            }

            toggle.ToggleAnimator.Highlight(state);
        }
    }
}
