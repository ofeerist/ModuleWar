using Assets.Scripts.Ship.AI;
using Pathfinding;
using UnityEngine;
using UnityEngine.AI;

namespace FSM
{
    [CreateAssetMenu(menuName = "FSM/Actions/Chase")]
    public class SearchAction : FSMAction
    {
        public override void Execute(BaseStateMachine stateMachine)
        {
            var steer = stateMachine.GetComponent<SteerThruster>();

            if (steer.IsDone)
            {
                steer.Target.position = GetRandomPosition();
            }
        }

        private Vector3 GetRandomPosition()
        {
            var size = (AstarPath.active.graphs[0] as GridGraph).size;

            var position = new Vector3(Random.Range(-size.x / 2, size.x / 2), Random.Range(-size.y / 2, size.y / 2));
            position = (Vector3)AstarPath.active.graphs[0].GetNearest(position).node.position;
            return position;
        }
    }
}