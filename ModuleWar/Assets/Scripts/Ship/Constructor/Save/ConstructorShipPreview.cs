using UI.MainMenu;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.Ship.Constructor.Save
{
    internal class ConstructorShipPreview : ShipPreview
    {
        [SerializeField] private Button _button;
        public Button Button => _button;

        [SerializeField] private Button _deleteButton;
        public Button DeleteButton => _deleteButton;
    }
}
