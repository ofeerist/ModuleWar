using Ship.Constructor;
using Ship.Module;
using Ship.SaveLoad;
using UnityEngine;

namespace Assets.Scripts.Ship.Constructor.History
{
    public class ConstructorInput
    {
        public ConstructorPlacer Placer { get; private set; }
        public Vector2Int CellPosition { get; private set; }
        public ModuleBase Module { get; private set; }
        
        public ConstructorInput(Vector2Int cellPosition, ModuleBase module, ConstructorPlacer placer)
        {
            CellPosition = cellPosition;
            Module = module;
            Placer = placer;

        }
    }
}
