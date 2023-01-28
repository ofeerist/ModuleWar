using System;
using Photon.Pun;
using Ship.Module.HealthInterface;
using UniRx;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Ship.Module.Blaster
{
    public class BlasterBase : ModuleBase, IDamageable
    {
        [SerializeField] protected InputAction _attackAction;
        [SerializeField] protected float _cooldownTime;
        private float _cooldownTimer;

        public event Action OnAttack;

        protected override void OnStart()
        {
            if (Ship.View.Owner != PhotonNetwork.LocalPlayer && Ship.View.IsOwnerActive) return;

            Observable.EveryUpdate().Subscribe(x =>
            {
                if (_attackAction.ReadValue<float>() == 0 || _ship == null) return;

                Perfomed();
            }).AddTo(this);

            _attackAction.Enable();
        }

        private void Perfomed()
        {
            if (_cooldownTimer >= Time.time) return;

            _cooldownTimer = Time.time + _cooldownTime;

            OnAttack?.Invoke();

            Attack();
        }

        protected virtual void Attack()
        {

        }

        public void Damage(ITakeDamageable takeDamageable, ref float damage, RaycastHit2D hit)
        {
            takeDamageable.TakeDamage(this, ref damage, hit);
        }
    }
}
