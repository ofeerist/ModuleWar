using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

namespace FOW
{
    public class FogOfWarPass : ScriptableRenderPass
    {
        public FilterMode filterMode { get; set; }
        //public FogOfWarRenderFeature.FOWURPSettings settings;

        RenderTargetIdentifier source;
        RenderTargetIdentifier destination;

        int temporaryRTId = Shader.PropertyToID("_TempRT");
        int sourceId;
        int destinationId;

        string m_ProfilerTag;
        public FogOfWarPass(string tag)
        {
            m_ProfilerTag = tag;
        }
        public override void OnCameraSetup(CommandBuffer cmd, ref RenderingData renderingData)
        {
            RenderTextureDescriptor blitTargetDescriptor = renderingData.cameraData.cameraTargetDescriptor;
            blitTargetDescriptor.depthBufferBits = 0;

            var renderer = renderingData.cameraData.renderer;

            sourceId = -1;
            source = renderer.cameraColorTarget;
            destinationId = temporaryRTId;
            cmd.GetTemporaryRT(destinationId, blitTargetDescriptor, filterMode);
            destination = new RenderTargetIdentifier(destinationId);
        }

        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            if (FogOfWarWorld.instance == null)
            {
                //Debug.Log("returning");
                return;
            }

            CommandBuffer cmd = CommandBufferPool.Get(m_ProfilerTag);
            renderingData.cameraData.camera.depthTextureMode = DepthTextureMode.DepthNormals;

            Matrix4x4 camToWorldMatrix = renderingData.cameraData.camera.cameraToWorldMatrix;

            Matrix4x4 projectionMatrix = renderingData.cameraData.camera.projectionMatrix;
            Matrix4x4 inverseProjectionMatrix = GL.GetGPUProjectionMatrix(projectionMatrix, true).inverse;

            inverseProjectionMatrix[1, 1] *= -1;

            FogOfWarWorld.instance.fowMat.SetMatrix("_camToWorldMatrix", camToWorldMatrix);
            FogOfWarWorld.instance.fowMat.SetMatrix("_inverseProjectionMatrix", inverseProjectionMatrix);

            // Can't read and write to same color target, create a temp render target to blit. 
            Blit(cmd, source, destination, FogOfWarWorld.instance.fowMat, 0);
            Blit(cmd, destination, source);

            context.ExecuteCommandBuffer(cmd);
            CommandBufferPool.Release(cmd);
        }

        public override void FrameCleanup(CommandBuffer cmd)
        {
            if (destinationId != -1)
                cmd.ReleaseTemporaryRT(destinationId);

            if (source == destination && sourceId != -1)
                cmd.ReleaseTemporaryRT(sourceId);
        }
    }
}