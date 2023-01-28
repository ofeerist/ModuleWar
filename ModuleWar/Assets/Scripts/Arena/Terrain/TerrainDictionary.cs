using System.Collections.Generic;
using UnityEngine;

namespace Arena.Terrain
{
    [CreateAssetMenu(fileName = "New TerrainDictionary", menuName = "TerrainDictionary")]
    public class TerrainDictionary : ScriptableObject
    {
        [SerializeField] private TerrainBase[] _modules;

        public Dictionary<int, TerrainBase> Database
        {
            get
            {
                var dict = new Dictionary<int, TerrainBase>();

                foreach (var item in _modules)
                    dict.Add(item.Id, item);

                return dict;
            }
        }
    }
}
