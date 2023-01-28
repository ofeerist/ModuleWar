using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.UI;

namespace UI.MainMenu
{
    internal class BattleButtonToggler : MonoBehaviour
    {
        [SerializeField] private ShipPreviewSelector _selector;
        [SerializeField] private Image _raycastTarget;

        [Space]

        [SerializeField] private LocalizedString _error;
        [SerializeField] private ErrorThrower _errorThrower;
        private void Start()
        {

            _selector.OnAnyToggleUnselected += () =>
            {
                _raycastTarget.raycastTarget = false;
                _errorThrower.ThrowError(_error.GetLocalizedString());
            };
            _selector.OnToggleSelected += (b) =>
            {
                _raycastTarget.raycastTarget = true;
                _errorThrower.ToTransparent();
            };
        }
    }
}
