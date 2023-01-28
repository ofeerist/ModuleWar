using TMPro;
using UI.Toggle;
using UnityEngine;

namespace UI.Save
{
    public class SaveToggle : UnityEngine.UI.Toggle
    {
        [SerializeField] private ToggleAnimator _toggleAnimator;
        public ToggleAnimator ToggleAnimator => _toggleAnimator;

        [SerializeField] private TextMeshProUGUI _textMesh;
        public TextMeshProUGUI TextMesh => _textMesh;
    }
}
