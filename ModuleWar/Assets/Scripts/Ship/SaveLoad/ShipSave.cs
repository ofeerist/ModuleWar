using System;
using System.Collections.Generic;
using UnityEngine;

namespace Ship.SaveLoad
{
    [Serializable]
    public class ModuleSave
    {
        public string Id;
        public Vector2Int Position;

        public ModuleSave(string id, Vector2Int position)
        {
            Id = id;
            Position = position;
        }
    }
    [Serializable]
    public class ShipSave
    {
        public DateTime CreationDate;
        public List<ModuleSave> Modules = new();
    }
}
