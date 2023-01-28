

using Photon.Pun;
using UniRx;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace Assets.Scripts.Lobby
{
    internal class RoomDoor : MonoBehaviour
    {
        [SerializeField] private Animator _animator;
        [SerializeField] private float _radius;

        [Space]

        [SerializeField] private LayerMask _target;

        private readonly Collider2D[] _results = new Collider2D[1];

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.green;

            Gizmos.DrawWireSphere(transform.position, _radius);
        }

        private void Start()
        {
            Observable.EveryUpdate().Subscribe(x =>
            {
                var size =
                Physics2D.OverlapCircleNonAlloc((Vector2)transform.position, _radius, _results, _target);

                _animator.SetBool("Active", size != 0);
            }).AddTo(this);
        }
    }
}
