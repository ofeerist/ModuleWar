using System;
using UnityEngine;

namespace Ship.Module.Thruster
{
    [Serializable]
    public class ThrusterParameters
    {
        public float Force;
        public float ForwardCoefficient;
        public float SideCoefficient;
        public float BackwardCoefficient;
    }
    public class ThrusterBase : ModuleBase
    {
        [SerializeField] private ThrusterParameters _thrusterParameters;
        public ThrusterParameters ThrusterParameters => _thrusterParameters;

        public override string GetDescription(string color)
        {
            return ModuleInfo.Description.GetLocalizedString(color, MaxHealth, Weight, _thrusterParameters.Force, _thrusterParameters.ForwardCoefficient, _thrusterParameters.BackwardCoefficient, _thrusterParameters.SideCoefficient);
        }

        public override string GetBinding(string color)
        {
            return ModuleInfo.Binding.GetLocalizedString(color, "WASD");
        }
    }
}