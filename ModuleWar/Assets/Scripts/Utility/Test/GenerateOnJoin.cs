using Arena;
using Photon.Pun;
using UnityEngine;

namespace Assets.Scripts.Utility.Test
{
    internal class GenerateOnJoin : Photon.Pun.MonoBehaviourPunCallbacks
    {
        [SerializeField] private GeneratorPlacer _generator;

        public override void OnJoinedRoom()
        {
            _generator.Generate((int)PhotonNetwork.CurrentRoom.CustomProperties["seed"]);
        }
    }
}
