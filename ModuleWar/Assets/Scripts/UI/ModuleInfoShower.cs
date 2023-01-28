using Ship.Constructor.Palette;
using TMPro;
using UnityEngine;
using UnityEngine.Localization;

namespace UI
{
    public class ModuleInfoShower : MonoBehaviour
    {
        [SerializeField] private PaletteDragger _selector;

        [Space]

        [SerializeField] private TextMeshProUGUI _name;
        [SerializeField] private TextMeshProUGUI _tier;
        [SerializeField] private LocalizedString _tierName;

        [Space]

        [SerializeField] private TextMeshProUGUI _description;

        [Space]

        [SerializeField] private TextMeshProUGUI _bindings;

        [Space]

        [SerializeField] private Color _numberColor;

        private void Start()
        {
            _selector.OnClicked += OnClicked;
        }

        private void OnClicked(PaletteItem item)
        {
            var module = item.Module;
            var color = "#" + ColorUtility.ToHtmlStringRGB(_numberColor);

            _name.text = module.ModuleInfo.Name.GetLocalizedString();
            _tier.text = _tierName.GetLocalizedString(TierColor.ConvertFromTier(module.ModuleInfo.Tier), TierName.ConvertFromTier(module.ModuleInfo.Tier));

            _description.text = module.GetDescription(color);
            _bindings.text = module.GetBinding(color);
        }
    }
}
