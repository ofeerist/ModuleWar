using UnityEngine;

namespace Ship.Module.HealthInterface
{
    public interface ITakeDamageable
    {
        void TakeDamage(IDamageable damageable, ref float damage, RaycastHit2D hit);
    }
}