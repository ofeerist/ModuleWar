using Ship.Module.HealthInterface;
using UniRx;
using UnityEngine;

namespace Ship.Module.Blaster
{
    internal class LaserBlaster : BlasterBase
    {
        [SerializeField] private float _lenght;
        [SerializeField] private float _width;

        [Space]

        [SerializeField] private float _damage;
        [SerializeField] private float _damageInterval;

        [SerializeField] private float _disableTime;

        [Space]

        [SerializeField] private LayerMask _layerMask;

        [Space]

        [SerializeField] private LineRenderer _lineRenderer;
        private bool _attacking;

        private readonly SerialDisposable _disableTimer = new();
        private RaycastHit2D[] _results = new RaycastHit2D[10];

        protected override void OnStart()
        {
            base.OnStart();

            _lineRenderer.SetPosition(1, new Vector3(0, _lenght, 0));
            _lineRenderer.startWidth = _lineRenderer.endWidth = _width;

            _disableTimer.AddTo(this);

            var _transform = transform;

            Observable.Interval(System.TimeSpan.FromSeconds(_damageInterval)).Subscribe(x =>
            {
                if (!_attacking) return;

                var size = _width / 2 * -_transform.right;

                var center = _transform.position + _lenght / 2 * _transform.up;
                var boxSize = new Vector2(_width, _lenght);

                var count = Physics2D.BoxCastNonAlloc(center, boxSize, _transform.eulerAngles.z, 
                    _transform.up, _results, _lenght, _layerMask);

                BoxCastDrawer.BoxCastAndDraw(center, boxSize, _transform.eulerAngles.z, Vector2.zero);

                for (int i = 0; i < count; i++)
                {
                    var module = _results[i].collider.GetComponent<ITakeDamageable>();
                    var damage = _damage;
                    Damage(module, ref damage, _results[i]);
                }
            }).AddTo(this);
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.cyan;
            var _transform = transform;

            var size = _width / 2 * -_transform.right;

            var center = _transform.position + _lenght / 2 * _transform.up;
            var boxSize = new Vector2(_width, _lenght);

            var positionA = _transform.position - size;
            var positionB = _transform.position + size + _lenght * _transform.up;
            Gizmos.DrawLine(positionA, positionB);
            Gizmos.DrawLine(_transform.position, _transform.position + _lenght * _transform.up);
            Gizmos.DrawWireCube(center, boxSize);
        }

        protected override void Attack()
        {
            _attacking = true;
            _lineRenderer.enabled = true;

            _disableTimer.Disposable = Observable.Timer(System.TimeSpan.FromSeconds(_disableTime)).Subscribe(x =>
            {
                _attacking = false;
                _lineRenderer.enabled = false;
            });
        }

        public override string GetDescription(string color)
        {
            return ModuleInfo.Description.GetLocalizedString(color, MaxHealth, Weight, _width, _lenght, _damage);
        }

        public override string GetBinding(string color)
        {
            //var bind = _attackAction.bindings[0].path.Split(@"/")[1];
            return ModuleInfo.Binding.GetLocalizedString(color, "'\uf8cc");
        }
    }
}
