using System;
using UnityEngine;

namespace Ship.Module.Gyrodine
{
    [Serializable]
    public class GyrodineParameters
    {
        public float MaxTorque;
        public float P, I, D;
    }

    public class GyrodineBase : ModuleBase
    {
        [SerializeField] private GyrodineParameters _parameters;
        public GyrodineParameters Parameters { get { return _parameters; } }

        public override string GetDescription(string color)
        {
            return ModuleInfo.Description.GetLocalizedString(color, MaxHealth, Weight, _parameters.MaxTorque);
        }

        public override string GetBinding(string color)
        {
            return ModuleInfo.Binding.GetLocalizedString(color, "\uf245");
        }
    }
}
