using Newtonsoft.Json;
using Ship.Constructor;
using System;
using UnityEngine;

namespace Ship.SaveLoad
{
    public class ShipSaver : MonoBehaviour
    {
        [SerializeField] private ConstructorPlacer _placer;

        public string SaveShip()
        {
            var save = new ShipSave();
            var modules = _placer.Modules;

            foreach (var row in modules)
            {
                var module = row.Value;

                if (module == null) continue;

                save.Modules.Add(new ModuleSave(module.ModuleInfo.Id, row.Key));
            }

            save.CreationDate = DateTime.Now;

            var json = JsonConvert.SerializeObject(save);
            return json;
        }

        public ShipSave SaveShipNoJson()
        {
            var save = new ShipSave();
            var modules = _placer.Modules;

            foreach (var row in modules)
            {
                var module = row.Value;

                if (module == null) continue;

                save.Modules.Add(new ModuleSave(module.ModuleInfo.Id, row.Key));
            }

            save.CreationDate = DateTime.Now;

            return save;
        }
    }
}
