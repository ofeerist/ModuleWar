using System.Collections.Generic;
using Ship.Module;
using UnityEngine;

namespace Ship.SaveLoad
{
    [CreateAssetMenu(fileName = "New ModuleDictionary", menuName = "ModuleDictionary")]
    public class ModuleIDDictionary : ScriptableObject
    {
        [SerializeField] private ModuleBase[] _modules;

        public Dictionary<string, ModuleBase> Database 
        { 
            get
            {
                var dict = new Dictionary<string, ModuleBase>();

                foreach (var item in _modules)
                    dict.Add(item.ModuleInfo.Id, item);
                
                return dict;
            } 
        }
    }
}
