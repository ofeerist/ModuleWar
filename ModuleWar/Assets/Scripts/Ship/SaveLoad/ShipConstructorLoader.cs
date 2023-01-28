using Ship.Constructor;
using UnityEngine;

namespace Ship.SaveLoad
{
    public class ShipConstructorLoader : MonoBehaviour
    {
        [SerializeField] private ConstructorPlacer _placer;
        [SerializeField] private ModuleIDDictionary _dictionary;

        public void SaveLoad(ShipSave save)
        {
            _placer.ClearConstructorField();

            var database = _dictionary.Database;
            foreach (var module in save.Modules)
                _placer.InstantiateModule(module.Position, database[module.Id]);

            _placer.UpdateAvailabilityMap();
        }
    }
}
