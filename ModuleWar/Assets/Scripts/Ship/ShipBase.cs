using Photon.Pun;
using Ship.Module;
using Ship.Module.Gyrodine;
using Ship.Module.Thruster;
using UnityEngine;

namespace Ship
{
    public class ShipBase : MonoBehaviour
    {
        [SerializeField] private ThrusterApplier _thrusterApplier;
        [SerializeField] private GyrodineApplier _gyrodineApplier;
        [SerializeField] private Rigidbody2D _rigidbody;
        [SerializeField] private PhotonView _view;

        public ThrusterApplier ThrusterApplier => _thrusterApplier;
        public GyrodineApplier GyrodineApplier => _gyrodineApplier;
        public Rigidbody2D Rigidbody => _rigidbody;

        private ModuleBase[] _modules;
        public ModuleBase[] Modules => _modules;
        public void SetModules(ModuleBase[] modules) => _modules = modules;

        public PhotonView View => _view;
    }
}
