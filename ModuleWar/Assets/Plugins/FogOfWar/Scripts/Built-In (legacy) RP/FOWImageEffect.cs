using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FOW
{
    [RequireComponent(typeof(Camera))]
    public class FOWImageEffect : MonoBehaviour
    {
        Camera cam;

        private void Awake()
        {
            cam = GetComponent<Camera>();
        }

        private void OnPreRender()
        {
            if (!FogOfWarWorld.instance)
                return;
            cam.depthTextureMode = DepthTextureMode.DepthNormals;

            Matrix4x4 camToWorldMatrix = cam.cameraToWorldMatrix;

            Matrix4x4 projectionMatrix = cam.projectionMatrix;
            Matrix4x4 inverseProjectionMatrix = GL.GetGPUProjectionMatrix(projectionMatrix, true).inverse;

            inverseProjectionMatrix[1, 1] *= -1;

            FogOfWarWorld.instance.fowMat.SetMatrix("_camToWorldMatrix", camToWorldMatrix);
            FogOfWarWorld.instance.fowMat.SetMatrix("_inverseProjectionMatrix", inverseProjectionMatrix);
        }
        void OnRenderImage(RenderTexture src, RenderTexture dest)
        {
            if (!FogOfWarWorld.instance)
                return;

            Graphics.Blit(src, dest, FogOfWarWorld.instance.fowMat);
        }
    }
}