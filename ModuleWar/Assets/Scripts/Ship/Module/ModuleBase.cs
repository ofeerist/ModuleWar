using System;
using Ship.Constructor.Palette;
using Ship.Module.HealthInterface;
using UnityEngine;
using UnityEngine.Localization;

namespace Ship.Module
{
    public enum Tier
    {
        S,
        A,
        B,
        C,
        D,
        E,
        F
    }
    [Serializable]
    public class ModuleInfo
    {
        public string Id;
        public LocalizedString Name;
        public LocalizedString Description;
        public LocalizedString Binding;
        public Tier Tier;

        public PaletteItem PaletteItem;
    }
    public class ModuleBase : MonoBehaviour, ITakeDamageable
    {
        [SerializeField] private ModuleInfo _moduleInfo;
        public ModuleInfo ModuleInfo => _moduleInfo;

        [SerializeField] protected ShipBase _ship;
        public ShipBase Ship { get => _ship; set => _ship = value; }

        [SerializeField] private float _weight;

        [Space]

        [SerializeField] private float _maxHealth;
        private float _currentHealth;

        public float MaxHealth => _maxHealth;
        public float CurrentHealth => _currentHealth;
        public float Weight => _weight;

        public delegate void PreDamage(IDamageable damageable, ref float damage);
        public event PreDamage PreDamaged;

        public delegate void OnDamage(ITakeDamageable takeDamageable, IDamageable damageable, float damage);
        public event OnDamage OnDamaged;

        public delegate void DDeath(ITakeDamageable takeDamageable);
        public event DDeath OnDeath;

        public void TakeDamage(IDamageable damageable, ref float damage, RaycastHit2D hit)
        {
            PreDamaged?.Invoke(damageable, ref damage);

            _currentHealth -= damage;

            OnDamaged?.Invoke(this, damageable, damage);

            if(_currentHealth <= 0)
                Death();
        }

        private void Death()
        {
            OnDeath?.Invoke(this);

            Destroy(gameObject);
        }

        private void Start()
        {
            _currentHealth = _maxHealth;

            OnStart();
        }

        protected virtual void OnStart()
        {

        }

        public virtual string GetDescription(string color)
        {
            return ModuleInfo.Description.GetLocalizedString(color, MaxHealth, Weight);
        }

        public virtual string GetBinding(string color)
        {
            return ModuleInfo.Binding.GetLocalizedString(color, "");
        }
    }
}
