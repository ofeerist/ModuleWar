using Photon.Pun;
using UnityEngine;

namespace Assets.Scripts.Multiplayer
{
    internal class NonMasterDisable : MonoBehaviour
    {
        [SerializeField] private GameObject _toDisable;
        public void OnRoomCreated()
        {
            if (PhotonNetwork.IsConnected)
                _toDisable.SetActive(PhotonNetwork.LocalPlayer.IsMasterClient);
        }
    }
}
