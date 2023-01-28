using TMPro;
using UI.Toggle;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class ModuleToggleShower : MonoBehaviour
    {
        [SerializeField] private ToggleExtended _toggleExtended;

        [Space]

        [SerializeField] private TextMeshProUGUI _name;
        [SerializeField] private Image _shadow;
        private void Start()
        {
            _name.text = _toggleExtended.Module.ModuleInfo.Name.GetLocalizedString();
            _name.SetAllDirty();
            _name.SetText(_toggleExtended.Module.ModuleInfo.Name.GetLocalizedString());
            if (ColorUtility.TryParseHtmlString(TierColor.ConvertFromTier(_toggleExtended.Module.ModuleInfo.Tier), out var color))
            {
                color.a = .078f;
                _shadow.color = color;
            }
        }
    }
}
