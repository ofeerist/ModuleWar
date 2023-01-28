using Assets.Scripts.Crafting.Inventory;
using Photon.Pun;
using UI.MainMenu;
using UniRx;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.Scripts.Arena
{
    internal class ArenaLeaver : MonoBehaviour
    {
        [SerializeField] private PhotonView _view;
        [SerializeField] private SceneLoader _loader;
        public UnityEvent OnLeave;
        public UnityEvent OnLobbyLoad;

        [Space]

        [SerializeField] private Vector2 _point;
        [SerializeField] private float _radius;
        [SerializeField] private LayerMask _playerMask;

        private readonly Collider2D[] _results = new Collider2D[4];

        [Space]

        [SerializeField] private GameObject _toMasterToggle;

        public void StartLeaver()
        {
            Observable.Interval(System.TimeSpan.FromSeconds(.5f)).Subscribe(x =>
            {
                var size = Physics2D.OverlapCircleNonAlloc(_point, _radius, _results, _playerMask);

                _toMasterToggle.SetActive(size == PhotonNetwork.CurrentRoom.PlayerCount 
                    && PhotonNetwork.LocalPlayer.IsMasterClient);

            }).AddTo(this);
        }

        public void LeaveArena()
        {
            _view.RPC(nameof(SyncedLeaveArena), RpcTarget.AllBufferedViaServer);
        }

        [PunRPC]
        private void SyncedLeaveArena()
        {
            OnLeave?.Invoke();

            DontDestroyOnLoad(transform.parent.gameObject);

            _loader.OnSceneLoad.AddListener(() => 
            {
                OnLobbyLoad?.Invoke();

                Destroy(transform.parent.gameObject);
            });

            _loader.Load();
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(_point, _radius);
        }
    }
}
