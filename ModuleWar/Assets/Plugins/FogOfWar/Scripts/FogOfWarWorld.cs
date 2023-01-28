using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
#if UNITY_EDITOR
using UnityEngine.Profiling;
#endif

namespace FOW
{
    public class FogOfWarWorld : MonoBehaviour
    {
        public static FogOfWarWorld instance;

        [Tooltip("The color of the fog")]
        public Color unknownColor = new Color(.65f, .65f, .65f);

        public FogOfWarType FogType;
        [Tooltip("how far to blur the edges. only used for soft fog types")]
        public float blurDistance = 1;
        [Range(0.001f, 1f)]
        public float SightExtraAmount = .01f;
        //public RenderPipelineType renderPipeline = RenderPipelineType.Built_In_Legacy;

        public RevealerUpdateMode reavealerMode = RevealerUpdateMode.Every_Frame;
        [Tooltip("The number of revealers to update each frame. Only used when Revealer Mode is set to N_Per_Frame")]
        public int numRevealersPerFrame = 3;

        [Tooltip("The Max possible number of revealers. Keep this as low as possible to use less GPU memory")]
        public int maxPossibleRevealers = 256;
        [Tooltip("The Max possible number of segments per revealer. Keep this as low as possible to use less GPU memory")]
        public int maxPossibleSegmentsPerRevealer = 125;

        [HideInInspector]
        public Material fowMat;

        int maxCones;
        ComputeBuffer indicesBuffer;
        ComputeBuffer circleBuffer;
        ComputeBuffer anglesBuffer;
        int numCircles;
        int materialColorID;
        int blurRadiusID;
        int extraRadiusID;

        #region Data Structures

        [StructLayout(LayoutKind.Sequential)]
        public struct CircleStruct
        {
            public Vector2 circleOrigin;
            public int startIndex;
            public int numSegments;
            public float circleRadius;
            public float unobscuredRadius;
            public bool isComplete;
        };

        [StructLayout(LayoutKind.Sequential)]
        public struct ConeEdgeStruct
        {
            public float angle;
            public float length;
            public bool cutShort;
        };
        public enum RevealerUpdateMode
        {
            Every_Frame,
            N_Per_Frame,
            Controlled_ElseWhere,
        };
        public enum FogOfWarType
        {
            No_Bleed,
            No_Bleed_Soft,
            Hard,
            Soft,
        };
        //public enum RenderPipelineType
        //{
        //    Built_In_Legacy,
        //    URP,
        //    HDRP,
        //};
        #endregion

        #region Unity Methods
        private void Awake()
        {
            Initialize();
        }
        private void OnEnable()
        {
            Initialize();
        }
        private void OnDisable()
        {
            cleanup();
        }

        int currentIndex = 0;
        Color previousColor;
        float previousBlur;
        float previousExtra;
        private void Update()
        {
            if (unknownColor != previousColor)
            {
                fowMat.SetColor(materialColorID, unknownColor);
                previousColor = unknownColor;
            }
            if (previousBlur != blurDistance)
            {
                fowMat.SetFloat(blurRadiusID, blurDistance);
                previousBlur = blurDistance;
            }
            if (previousExtra != SightExtraAmount)
            {
                fowMat.SetFloat(extraRadiusID, SightExtraAmount);
                previousExtra = SightExtraAmount;
            }

            switch (reavealerMode)
            {
                case RevealerUpdateMode.Every_Frame:
                    for (int i = 0; i < numCircles; i++)
                    {
                        revealers[i].CalculateLineOfSight();
                    }
                    break;
                case RevealerUpdateMode.N_Per_Frame:
                    for (int i = 0; i < Mathf.Clamp(numRevealersPerFrame, 0, numCircles); i++)
                    {
                        currentIndex = (currentIndex + 1) % numCircles;
                        revealers[currentIndex].CalculateLineOfSight();
                    }
                    break;
                case RevealerUpdateMode.Controlled_ElseWhere: break;
            }
        }
        #endregion

        void cleanup()
        {
            if (circleBuffer != null)
            {
                setAnglesBuffersJobHandle.Complete();
                AnglesNativeArray.Dispose();
                indicesBuffer.Dispose();
                circleBuffer.Dispose();
                anglesBuffer.Dispose();
            }
        }

        private JobHandle setAnglesBuffersJobHandle;
        private SetAnglesBuffersJob setAnglesBuffersJob;
        NativeArray<ConeEdgeStruct> AnglesNativeArray;
        ConeEdgeStruct[] anglesArray;

        public void Initialize()
        {
            if (instance)
                return;
            instance = this;

            string shaderName = "Hidden/FullScreen/FOW/";
            switch (FogType)
            {
                case FogOfWarType.No_Bleed: shaderName += "NoBleed"; break;
                case FogOfWarType.No_Bleed_Soft: shaderName += "NoBleedSoft"; break;
                case FogOfWarType.Hard: shaderName += "Hard"; break;
                case FogOfWarType.Soft: shaderName += "Soft"; break;
            }
            fowMat = new Material(Shader.Find(shaderName));

            materialColorID = Shader.PropertyToID("_unKnownColor");
            blurRadiusID = Shader.PropertyToID("_fadeOutDistance");
            extraRadiusID = Shader.PropertyToID("_extraRadius");
            fowMat.SetColor(materialColorID, unknownColor);
            fowMat.SetFloat(blurRadiusID, blurDistance);
            fowMat.SetFloat(extraRadiusID, SightExtraAmount);

            maxCones = maxPossibleRevealers * maxPossibleSegmentsPerRevealer;

            revealers = new FogOfWarRevealer[maxPossibleRevealers];
            indicesBuffer = new ComputeBuffer(maxPossibleRevealers, Marshal.SizeOf(typeof(int)), ComputeBufferType.Default, ComputeBufferMode.SubUpdates);
            fowMat.SetBuffer(Shader.PropertyToID("_ActiveCircleIndices"), indicesBuffer);

            circleBuffer = new ComputeBuffer(maxPossibleRevealers, Marshal.SizeOf(typeof(CircleStruct)), ComputeBufferType.Default, ComputeBufferMode.SubUpdates);
            fowMat.SetBuffer(Shader.PropertyToID("_CircleBuffer"), circleBuffer);

            anglesArray = new ConeEdgeStruct[maxPossibleSegmentsPerRevealer];
            AnglesNativeArray = new NativeArray<ConeEdgeStruct>(maxPossibleSegmentsPerRevealer, Allocator.Persistent);
            anglesBuffer = new ComputeBuffer(maxCones, Marshal.SizeOf(typeof(ConeEdgeStruct)), ComputeBufferType.Default, ComputeBufferMode.SubUpdates);
            fowMat.SetBuffer(Shader.PropertyToID("_ConeBuffer"), anglesBuffer);

            setAnglesBuffersJob = new SetAnglesBuffersJob();

            foreach (FogOfWarRevealer revealer in revealersToRegister)
            {
                revealer.registerRevealer();
            }
            revealersToRegister.Clear();
        }

        public FogOfWarRevealer[] revealers;
        public List<int> deregisteredIDs = new List<int>();
        int numDeregistered = 0;
        public static List<FogOfWarRevealer> revealersToRegister = new List<FogOfWarRevealer>();    //just used to prevent script execution order errors
        public int registerRevealer(FogOfWarRevealer newRevealer)
        {
#if UNITY_EDITOR
            Profiler.BeginSample("Register Revealer");
#endif
            numCircles++;
            fowMat.SetInt(Shader.PropertyToID("_NumCircles"), numCircles);

            int newID = numCircles - 1;
            revealers[newID] = newRevealer;
            if (numDeregistered > 0)
            {
                numDeregistered--;
                newID = deregisteredIDs[0];
                deregisteredIDs.RemoveAt(0);
            }

            newRevealer.indexID = numCircles - 1;

            _circleIndicesArray = indicesBuffer.BeginWrite<int>(numCircles - 1, 1);
            _circleIndicesArray[0] = newID;

            indicesBuffer.EndWrite<int>(1);

#if UNITY_EDITOR
            Profiler.EndSample();
#endif
            return newID;
        }
        public void deRegisterRevealer(FogOfWarRevealer toRemove)
        {
#if UNITY_EDITOR
            Profiler.BeginSample("De-Register Revealer");
#endif
            int index = toRemove.indexID;

            deregisteredIDs.Add(toRemove.fogOfWarID);
            numDeregistered++;

            numCircles--;

            FogOfWarRevealer toSwap = revealers[numCircles];

            if (toRemove != toSwap)
            {
                revealers[index] = toSwap;

                _circleIndicesArray = indicesBuffer.BeginWrite<int>(index, 1);
                _circleIndicesArray[0] = toSwap.fogOfWarID;
                toSwap.indexID = index;

                indicesBuffer.EndWrite<int>(1);
            }

            fowMat.SetInt(Shader.PropertyToID("_NumCircles"), numCircles);
#if UNITY_EDITOR
            Profiler.EndSample();
#endif
        }

        public static List<FogOfWarHider> hiders = new List<FogOfWarHider>();
        public static int numHiders;

        public void updateCircle(int id, CircleStruct data, float[] radii, float[] distances, bool[] hits)
        {
#if UNITY_EDITOR
            Profiler.BeginSample("write to compute buffers");
#endif
            //setAnglesBuffersJobHandle.Complete();
            data.startIndex = id * maxPossibleSegmentsPerRevealer;
            _circleArray = circleBuffer.BeginWrite<CircleStruct>(id, 1);
            _circleArray[0] = data;

            if (radii.Length > maxPossibleSegmentsPerRevealer)
            {
                Debug.LogError($"the revealer is trying to register {radii.Length} segments. this is more than was set by maxPossibleSegmentsPerRevealer");
                return;
            }
            for (int i = 0; i < radii.Length; i++)
            {
                anglesArray[i].angle = radii[i];
                anglesArray[i].length = distances[i];
                anglesArray[i].cutShort = hits[i];
                AnglesNativeArray[i] = anglesArray[i];
                //AnglesNativeArray[i] = new ConeEdgeStruct() { angle = radii[i], length = distances[i], cutShort = hits[i], };

            }
            _angleArray = anglesBuffer.BeginWrite<ConeEdgeStruct>(id * maxPossibleSegmentsPerRevealer, radii.Length);
            setAnglesBuffersJob.AnglesArray = _angleArray;
            setAnglesBuffersJob.Angles = AnglesNativeArray;
            setAnglesBuffersJobHandle = setAnglesBuffersJob.Schedule(radii.Length, 128);

            circleBuffer.EndWrite<CircleStruct>(1);

            setAnglesBuffersJobHandle.Complete();
            anglesBuffer.EndWrite<ConeEdgeStruct>(radii.Length);

#if UNITY_EDITOR
            Profiler.EndSample();
#endif
        }

        NativeArray<int> _circleIndicesArray;
        NativeArray<CircleStruct> _circleArray;
        NativeArray<ConeEdgeStruct> _angleArray;

        [BurstCompile(CompileSynchronously = true)]
        private struct SetAnglesBuffersJob : IJobParallelFor
        {
            [ReadOnly]
            public NativeArray<ConeEdgeStruct> Angles;
            [WriteOnly]
            public NativeArray<ConeEdgeStruct> AnglesArray;

            public void Execute(int index)
            {
                AnglesArray[index] = Angles[index];
            }
        }
    }
}