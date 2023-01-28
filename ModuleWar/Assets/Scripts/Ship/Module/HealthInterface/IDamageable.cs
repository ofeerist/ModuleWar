using UnityEngine;

namespace Ship.Module.HealthInterface
{
    public interface IDamageable
    {
        void Damage(ITakeDamageable takeDamageable, ref float damage, RaycastHit2D hit);
    }
}
