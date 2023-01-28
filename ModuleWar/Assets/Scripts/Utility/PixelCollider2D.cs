using Arena.Terrain;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace Utility
{


    public sealed class PixelCollider2D : MonoBehaviour
    {
        [Range(0, 1)]
        public float alphaCutoff = 0.5f;

        List<List<Vector2Int>> Pixel_Paths = new List<List<Vector2Int>>();
        public List<List<Vector2>> World_Paths = new List<List<Vector2>>();
        private PolygonCollider2D PGC2D;
        private SpriteRenderer SR;

        private Vector2Int _size;
        private Vector2 _pivot;
        private Bounds _bounds;

        private void Start()
        {
            PGC2D = GetComponent<PolygonCollider2D>();
            if (PGC2D == null)
            {
                throw new Exception($"PixelCollider2D could not be regenerated because there is no PolygonCollider2D component on \"{gameObject.name}\".");
            }
            SR = GetComponent<SpriteRenderer>();
            if (SR == null)
            {
                PGC2D.pathCount = 0;
                throw new Exception($"PixelCollider2D could not be regenerated because there is no SpriteRenderer component on \"{gameObject.name}\".");
            }
            if (SR.sprite == null)
            {
                PGC2D.pathCount = 0;
                return;
            }
            if (SR.sprite.texture == null)
            {
                PGC2D.pathCount = 0;
                return;
            }
            if (SR.sprite.texture.isReadable == false)
            {
                PGC2D.pathCount = 0;
                throw new Exception($"PixelCollider2D could not be regenerated because on \"{gameObject.name}\" because the sprite does not allow read/write operations.");
            }
        }

        public void UpdateSprite(Sprite sprite)
        {
            _size = new Vector2Int(sprite.texture.width, sprite.texture.height);
            _pivot = sprite.pivot;
            _bounds = sprite.bounds;
        }

        public void Regenerate(TerrainChunk terrain)
        {
            Pixel_Paths = Get_Unit_Paths(terrain, _size, alphaCutoff);
            Pixel_Paths = Simplify_Paths_Phase_1(Pixel_Paths);
            Pixel_Paths = Simplify_Paths_Phase_2(Pixel_Paths);
            World_Paths = Finalize_Paths(Pixel_Paths, _size, _pivot, _bounds);
        }

        public void UpdateCollider()
        {
            alphaCutoff = Mathf.Clamp(alphaCutoff, 0, 1);
            
            PGC2D.pathCount = World_Paths.Count;
            for (int p = 0; p < World_Paths.Count; p++)
            {
                PGC2D.SetPath(p, World_Paths[p].ToArray());
            }
        }
        private List<List<Vector2>> Finalize_Paths(List<List<Vector2Int>> Pixel_Paths, Vector2Int size, Vector2 pivot, Bounds bounds)
        {
            pivot.x *= Mathf.Abs(bounds.max.x - bounds.min.x);
            pivot.x /= size.x;
            pivot.y *= Mathf.Abs(bounds.max.y - bounds.min.y);
            pivot.y /= size.y;

            List<List<Vector2>> Output = new List<List<Vector2>>();
            for (int p = 0; p < Pixel_Paths.Count; p++)
            {
                List<Vector2> Current_List = new List<Vector2>();
                for (int o = 0; o < Pixel_Paths[p].Count; o++)
                {
                    Vector2 point = Pixel_Paths[p][o];
                    point.x *= Mathf.Abs(bounds.max.x - bounds.min.x);
                    point.x /= size.x;
                    point.y *= Mathf.Abs(bounds.max.y - bounds.min.y);
                    point.y /= size.y;
                    point -= pivot;
                    Current_List.Add(point);
                }
                Output.Add(Current_List);
            }
            return Output;
        }
        private static List<List<Vector2Int>> Simplify_Paths_Phase_1(List<List<Vector2Int>> Unit_Paths)
        {
            List<List<Vector2Int>> Output = new List<List<Vector2Int>>();
            while (Unit_Paths.Count > 0)
            {
                List<Vector2Int> Current_Path = new List<Vector2Int>(Unit_Paths[0]);
                Unit_Paths.RemoveAt(0);
                bool Keep_Looping = true;
                while (Keep_Looping)
                {
                    Keep_Looping = false;
                    for (int p = 0; p < Unit_Paths.Count; p++)
                    {
                        if (Current_Path[Current_Path.Count - 1] == Unit_Paths[p][0])
                        {
                            Keep_Looping = true;
                            Current_Path.RemoveAt(Current_Path.Count - 1);
                            Current_Path.AddRange(Unit_Paths[p]);
                            Unit_Paths.RemoveAt(p);
                            p--;
                        }
                        else if (Current_Path[0] == Unit_Paths[p][Unit_Paths[p].Count - 1])
                        {
                            Keep_Looping = true;
                            Current_Path.RemoveAt(0);
                            Current_Path.InsertRange(0, Unit_Paths[p]);
                            Unit_Paths.RemoveAt(p);
                            p--;
                        }
                        else
                        {
                            List<Vector2Int> Flipped_Path = new List<Vector2Int>(Unit_Paths[p]);
                            Flipped_Path.Reverse();
                            if (Current_Path[Current_Path.Count - 1] == Flipped_Path[0])
                            {
                                Keep_Looping = true;
                                Current_Path.RemoveAt(Current_Path.Count - 1);
                                Current_Path.AddRange(Flipped_Path);
                                Unit_Paths.RemoveAt(p);
                                p--;
                            }
                            else if (Current_Path[0] == Flipped_Path[Flipped_Path.Count - 1])
                            {
                                Keep_Looping = true;
                                Current_Path.RemoveAt(0);
                                Current_Path.InsertRange(0, Flipped_Path);
                                Unit_Paths.RemoveAt(p);
                                p--;
                            }
                        }
                    }
                }
                Output.Add(Current_Path);
            }
            return Output;
        }
        private static List<List<Vector2Int>> Simplify_Paths_Phase_2(List<List<Vector2Int>> Input_Paths)
        {
            for (int pa = 0; pa < Input_Paths.Count; pa++)
            {
                for (int po = 0; po < Input_Paths[pa].Count; po++)
                {
                    Vector2Int Start = new Vector2Int();
                    if (po == 0)
                    {
                        Start = Input_Paths[pa][Input_Paths[pa].Count - 1];
                    }
                    else
                    {
                        Start = Input_Paths[pa][po - 1];
                    }
                    Vector2Int End = new Vector2Int();
                    if (po == Input_Paths[pa].Count - 1)
                    {
                        End = Input_Paths[pa][0];
                    }
                    else
                    {
                        End = Input_Paths[pa][po + 1];
                    }
                    Vector2Int Current_Point = Input_Paths[pa][po];
                    Vector2 Direction1 = Current_Point - (Vector2)Start;
                    Direction1 /= Direction1.magnitude;
                    Vector2 Direction2 = End - (Vector2)Start;
                    Direction2 /= Direction2.magnitude;
                    if (Direction1 == Direction2)
                    {
                        Input_Paths[pa].RemoveAt(po);
                        po--;
                    }
                }
            }
            return Input_Paths;
        }
        private static List<List<Vector2Int>> Get_Unit_Paths(TerrainChunk terrain, Vector2Int size, float alphaCutoff)
        {
            List<List<Vector2Int>> Output = new List<List<Vector2Int>>();
            for (int x = 0; x < size.x; x++)
            {
                for (int y = 0; y < size.y; y++)
                {
                    if (pixelSolid(terrain, new Vector2Int(x, y), alphaCutoff))
                    {
                        if (!pixelSolid(terrain, new Vector2Int(x, y + 1), alphaCutoff))
                        {
                            Output.Add(new List<Vector2Int>() { new Vector2Int(x, y + 1), new Vector2Int(x + 1, y + 1) });
                        }
                        if (!pixelSolid(terrain, new Vector2Int(x, y - 1), alphaCutoff))
                        {
                            Output.Add(new List<Vector2Int>() { new Vector2Int(x, y), new Vector2Int(x + 1, y) });
                        }
                        if (!pixelSolid(terrain, new Vector2Int(x + 1, y), alphaCutoff))
                        {
                            Output.Add(new List<Vector2Int>() { new Vector2Int(x + 1, y), new Vector2Int(x + 1, y + 1) });
                        }
                        if (!pixelSolid(terrain, new Vector2Int(x - 1, y), alphaCutoff))
                        {
                            Output.Add(new List<Vector2Int>() { new Vector2Int(x, y), new Vector2Int(x, y + 1) });
                        }
                    }
                }
            }
            return Output;
        }
        private static bool pixelSolid(TerrainChunk terrain, Vector2Int point, float alphaCutoff)
        {
            if (point.x >= terrain.Size.x || point.y >= terrain.Size.y || point.x < 0 || point.y < 0) return false;

            return terrain.Blocks[point.x, point.y].Id != 0;
        }
    }

#if UNITY_EDITOR
    [CustomEditor(typeof(PixelCollider2D))]
    public class PixelColider2DEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            PixelCollider2D PC2D = (PixelCollider2D)target;
            if (GUILayout.Button("Regenerate Collider"))
            {
                //PC2D.Regenerate();
            }
        }
    }
#endif
}