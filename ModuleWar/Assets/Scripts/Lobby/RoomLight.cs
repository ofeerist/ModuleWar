

using Photon.Pun;
using UniRx;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace Assets.Scripts.Lobby
{
    internal class RoomLight : MonoBehaviour
    {
        [SerializeField] private BoxCollider2D _collider;
        [SerializeField] private Light2D _light;

        [SerializeField] private float _lerp;
        [SerializeField] private float _scale;

        [Space]

        [SerializeField] private LayerMask _target;

        private readonly Collider2D[] _results = new Collider2D[4];

        private void Start()
        {
            var intensity = _light.intensity;

            Observable.EveryUpdate().Subscribe(x =>
            {
                var size =
                Physics2D.OverlapBoxNonAlloc((Vector2)transform.position + _collider.offset * _scale, _collider.size * _scale, transform.rotation.eulerAngles.z, _results, _target);

                for (int i = 0; i < size; i++)
                {
                    var result = _results[i].gameObject.GetPhotonView();

                    _light.intensity = Mathf.Lerp(_light.intensity, 
                        result.Owner.IsLocal ? intensity : 0, _lerp * Time.deltaTime);
                }

                if (size != 0) return;

                _light.intensity = Mathf.Lerp(_light.intensity, 0, _lerp * Time.deltaTime);
            }).AddTo(this);
        }
    }
}
