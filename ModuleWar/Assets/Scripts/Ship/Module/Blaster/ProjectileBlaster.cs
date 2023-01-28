using UnityEngine;
using Utility;

namespace Ship.Module.Blaster
{
    internal class ProjectileBlaster : BlasterBase
    {
        [SerializeField] private Projectile _projectile;

        [SerializeField] private float _speed;
        [SerializeField] private float _damage;
        [SerializeField] private LayerMask _layerMask;

        public Rigidbody2D Rigidbody;
        private DynamicPool<Projectile> Pool;

        protected override void Attack()
        {
            if(Pool == null)
                Pool = new DynamicPool<Projectile>(_projectile, 1);
            
            var parameters = new ProjectileParameters
            {
                ProjectileOwner = this,
                Position = transform.position,
                Rotation = transform.rotation,
                Speed = _speed,
                Damage = _damage,
                LayerMask = _layerMask,
                AdditionalVelocity = Rigidbody.velocity,
                Pool = Pool
            };

            _projectile.Create(parameters);
        }

        public override string GetDescription(string color)
        {
            return ModuleInfo.Description.GetLocalizedString(color, MaxHealth, Weight, Mathf.Round(1 / _cooldownTime), _speed, _damage);
        }

        public override string GetBinding(string color)
        {
            //var bind = _attackAction.bindings[0].path.Split(@"/")[1];
            return ModuleInfo.Binding.GetLocalizedString(color, "'\uf8cc");
        }
    }
}
