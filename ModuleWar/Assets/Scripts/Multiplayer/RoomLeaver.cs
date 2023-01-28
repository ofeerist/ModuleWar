using Photon.Pun;
using UnityEngine;

namespace Assets.Scripts.Multiplayer
{
    internal class RoomLeaver : MonoBehaviour
    {
        private void Start()
        {
            DontDestroyOnLoad(this);
        }

        public void DestroySelf()
        {
            Destroy(gameObject);
        }

        [SerializeField] private GameObject[] _objectsToDestroy;
        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();

            foreach (var item in _objectsToDestroy)
            {
                Destroy(item);
            }
        }
    }
}
