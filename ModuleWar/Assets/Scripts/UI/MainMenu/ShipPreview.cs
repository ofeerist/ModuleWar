using Ship.SaveLoad;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.MainMenu
{
    internal class ShipPreview : MonoBehaviour
    {
        [SerializeField] private UnityEngine.UI.Toggle _toggle;
        [SerializeField] private RawImage _rawImage;
        [SerializeField] private TextMeshProUGUI _textMesh;
        [SerializeField] private MenuButtonAnimator _menuButton;
        [SerializeField] private CanvasGroup _canvasGroup;

        public RawImage RawImage => _rawImage;
        public TextMeshProUGUI TextMesh => _textMesh;
        public UnityEngine.UI.Toggle Toggle => _toggle;
        public MenuButtonAnimator MenuButton => _menuButton;
        public CanvasGroup CanvasGroup => _canvasGroup;

        public ShipSave Save { get; internal set; }
    }
}
