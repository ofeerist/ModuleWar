Shader "Hidden/FullScreen/FOW/Hard"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _unKnownColor("unKnownColor", Color) = (0.6037736, 0.6037736, 0.6037736, 1)
    }
    SubShader
    {
        // No culling or depth
        Cull Off ZWrite Off ZTest Always

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"
            #include "isInCone.hlsl"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            sampler2D _MainTex;
            sampler2D _CameraDepthTexture;

            float4x4 _camToWorldMatrix;
            float4x4 _inverseProjectionMatrix;

            float3 _unKnownColor;


            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 color = tex2D(_MainTex, i.uv);

                float d = SAMPLE_DEPTH_TEXTURE(_CameraDepthTexture, i.uv); // non-linear Z


                float2 uvClip = i.uv * 2.0 - 1.0;
                float4 clipPos = float4(uvClip, d, 1.0);
                float4 viewPos = mul(_inverseProjectionMatrix, clipPos); // inverse projection by clip position
                viewPos /= viewPos.w; // perspective division
                float3 worldPos = mul(_camToWorldMatrix, viewPos).xyz;

                float coneCheckOut;
                ConeCheck_float(worldPos.xz, coneCheckOut);

                //return viewPos;
                //return float4(worldPos, 1);
                return float4(lerp(color.rgb * _unKnownColor, color.rgb, coneCheckOut), color.a);
            }
            ENDCG
        }
    }
}
