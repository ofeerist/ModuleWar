using UnityEngine;

namespace Ship.Constructor.Palette
{
    internal class PaletteItemGraphic : MonoBehaviour
    {
        [SerializeField] private PaletteDragger _dragger;
        [SerializeField] private Transform _graphic;

        private void Start()
        {
            _dragger.OnClicked += OnClicked;
        }

        private void OnClicked(PaletteItem item)
        {
            _graphic.position = item.transform.position;
        }
    }
}
