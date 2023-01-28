using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FOW
{
    public class FogOfWarHider : MonoBehaviour
    {
        public GameObject[] objectsToHide;


        [HideInInspector] public int seenCount;
        [HideInInspector] public List<FogOfWarRevealer> seenBy = new List<FogOfWarRevealer>();

        private void OnEnable()
        {
            registerHider();
        }
        private void OnDisable()
        {
            deregisterHider();
        }

        public void registerHider()
        {
            if (!FogOfWarWorld.hiders.Contains(this))
            {
                FogOfWarWorld.hiders.Add(this);
                FogOfWarWorld.numHiders++;
                foreach (GameObject o in objectsToHide)
                {
                    o.SetActive(false);
                }
            }
        }

        public void deregisterHider()
        {
            if (FogOfWarWorld.hiders.Contains(this))
            {
                FogOfWarWorld.hiders.Remove(this);
                FogOfWarWorld.numHiders--;
                foreach (FogOfWarRevealer revealer in seenBy)
                {
                    revealer.hidersSeen.Remove(this);
                }
                seenBy.Clear();
            }
        }

        public void addSeer(FogOfWarRevealer seer)   //see-er?
        {
            seenBy.Add(seer);
            if (seenCount == 0)
            {
                foreach (GameObject o in objectsToHide)
                {
                    o.SetActive(true);
                }
            }
            seenCount++;
        }
        public void removeSeer(FogOfWarRevealer seer)   //see-er?
        {
            seenBy.Remove(seer);
            seenCount--;
            if (seenCount == 0)
            {
                foreach (GameObject o in objectsToHide)
                {
                    o.SetActive(false);
                }
            }
        }
    }
}