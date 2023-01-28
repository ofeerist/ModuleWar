using Photon.Pun;
using UnityEngine;

namespace Assets.Scripts.Multiplayer
{
    internal class NonOwnerDisable : MonoBehaviour
    {
        [SerializeField] private GameObject _toDisable;
        [SerializeField] private PhotonView _view;
        private void Awake()
        {
            if (PhotonNetwork.IsConnected)
                _toDisable.SetActive(_view.AmOwner);
        }
    }
}
