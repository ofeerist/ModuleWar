using Arena;
using Assets.Scripts.Arena;
using Photon.Pun;
using Photon.Realtime;
using Ship;
using Ship.Module;
using Ship.Module.Gyrodine;
using Ship.Module.Thruster;
using Ship.SaveLoad;
using UI.MainMenu;
using UniRx;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace Assets.Scripts.Lobby
{
    internal class LobbyCreator : MonoBehaviourPunCallbacks
    {
        private byte _maxPlayersPerRoom = 4;

        [SerializeField] private PhotonView _selfView;

        [Space]

        [SerializeField] private PhotonView _shipPrefab;
        [SerializeField] private Cinemachine.CinemachineVirtualCamera _cam;
        [SerializeField] private SceneLoader _loader;

        [Space]

        [SerializeField] private ArenaCreator _prefab;
        [SerializeField] private ShipPreviewSelector _ships;

        private CompositeDisposable _disposable = new();

        public UnityEvent OnSyncedStart;
        public UnityEvent OnRoomCreated;

        private readonly SerialDisposable _serial = new();

        private void Start()
        {
            DontDestroyOnLoad(this);

            _disposable.AddTo(this);
            _serial.AddTo(this);
        }

        public void StartArena()
        {
            var id = PhotonNetwork.Instantiate(_prefab.name, Vector3.zero, Quaternion.identity).GetPhotonView().ViewID;

            Observable.Timer(System.TimeSpan.FromSeconds(.5f)).Subscribe(x =>
            {
                _selfView.RPC(nameof(SyncedArena), RpcTarget.AllBufferedViaServer, id);
            }).AddTo(this);
        }

        [PunRPC]
        private void SyncedArena(int viewId)
        {
            var arena = PhotonNetwork.GetPhotonView(viewId).GetComponent<ArenaCreator>();
            arena.PrepareLoad(_ships);

            arena.GetComponentInChildren<ArenaLeaver>().OnLobbyLoad.AddListener(() => 
            {
                _cam.gameObject.SetActive(true);

                OnRoomCreated?.Invoke();

                CreateShip(PhotonNetwork.LocalPlayer.ActorNumber - 1).gameObject.SetActive(true);
            });

            _loader.OnSceneLoad.AddListener(() => arena.StartArena());

            OnSyncedStart?.Invoke();
        }

        public void StartSolo()
        {
            if (PhotonNetwork.IsConnected)
            {
                PhotonNetwork.Disconnect();
            }
            else
            {
                OnDisconnected(DisconnectCause.DisconnectByClientLogic);
            }
            
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            if (cause is DisconnectCause.DisconnectByClientLogic)
            {
                PhotonNetwork.OfflineMode = true;

                _serial.Disposable = Observable.EveryUpdate().Where(x => PhotonNetwork.IsConnectedAndReady).Subscribe(x =>
                {
                    _serial.Disposable = Observable.NextFrame().Subscribe(x =>
                    {
                        CreateRoom();

                        _serial.Dispose();
                    });
                    
                });
            }
        }



        public void JoinOrCreateLobby()
        {
            PhotonNetwork.JoinRandomRoom();
        }


        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            CreateRoom();
        }
        
        private void CreateRoom()
        {
            var hash = new ExitGames.Client.Photon.Hashtable
            {
                { "seed", Time.frameCount }
            };
            PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = _maxPlayersPerRoom, CustomRoomProperties = hash });
        }

        private byte state = 0;
        public override void OnJoinedRoom()
        {
            if (state != 0)
                OnSceneLoaded();

            state++;

            OnRoomCreated?.Invoke();
        }

        public void OnSceneLoaded()
        {
            if (state != 0)
                CreateShip(PhotonNetwork.LocalPlayer.ActorNumber - 1).gameObject.SetActive(true);

            state++;
        }

        private ShipBase CreateShip(int players)
        {
            var view = PhotonNetwork.Instantiate(_shipPrefab.name, Vector3.zero, Quaternion.identity).GetPhotonView();
            var ship = view.GetComponent<ShipBase>();
            ship.SetModules(new ModuleBase[2] { 
                ship.GetComponentInChildren<ThrusterBase>(), 
                ship.GetComponentInChildren<GyrodineBase>() });
            ShipInitializator.Init(ship, _cam.GetComponent<Camera>());
            ship.gameObject.SetActive(false);

            _cam.Follow = ship.transform;
            _cam.gameObject.SetActive(true);

            _selfView.RPC(nameof(ChangeColor), RpcTarget.AllBufferedViaServer, view.ViewID, players);

            return ship;
        }

        [PunRPC]
        private void ChangeColor(int viewId, int players)
        {
            PhotonNetwork.GetPhotonView(viewId)
                .GetComponentInChildren<SpriteRenderer>().color = Color.HSVToRGB(90f * players / 360f, 1, 1);
        }
    }
}
