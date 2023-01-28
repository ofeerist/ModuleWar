using Ship.Module.Blaster;
using Ship.Module.Gyrodine;
using Ship.Module.Thruster;
using UnityEngine;

namespace Ship.SaveLoad
{
    public static class ShipInitializator
    {
        public static void Init(ShipBase ship, Camera camera)
        {
            foreach (var module in ship.Modules)
            {
                if (module is ThrusterBase tb) ship.ThrusterApplier.Thrusters.Add(tb);
                if (module is GyrodineBase gb) ship.GyrodineApplier.Gyrodines.Add(gb);
                if (module is ProjectileBlaster pb) pb.Rigidbody = ship.Rigidbody;
            }

            ship.GyrodineApplier.Camera = camera;

            ship.ThrusterApplier.enabled = true;
            ship.GyrodineApplier.enabled = true;
        }
    }
}
