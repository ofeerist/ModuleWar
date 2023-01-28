using Ship.Module;
using UnityEngine;

namespace UI.Toggle
{
    public class ToggleExtended : UnityEngine.UI.Toggle
    {
        [SerializeField] private ToggleAnimator _toggleAnimator;
        public ToggleAnimator ToggleAnimator => _toggleAnimator;

        [SerializeField] private ModuleBase _module;
        public ModuleBase Module => _module;
    }
}
