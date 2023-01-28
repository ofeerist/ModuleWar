using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering.Universal;

internal class ShadowRegenerator : MonoBehaviour
{
    [SerializeField] private ShadowCaster2D _casterPrefab;
    [SerializeField] private PixelCollider2DEditor _collider2D;

    private static FieldInfo shapePathField =
        typeof(ShadowCaster2D).GetField("m_ShapePath", BindingFlags.NonPublic | BindingFlags.Instance);

    private static FieldInfo shapeHash =
typeof(ShadowCaster2D).GetField("m_ShapePathHash", BindingFlags.NonPublic | BindingFlags.Instance);


    private void UpdateShadowFromPoints(ShadowCaster2D _caster, Vector3[] points)
    {
        // Set the shadow path
        shapePathField.SetValue(_caster, points);

        unchecked
        {
            // I have no idea what im doing with hashcodes but other examples are done like this
            int hashCode = (int)2166136261 ^ shapePathField.GetHashCode();
            hashCode = hashCode * 16777619 ^ (points.GetHashCode());

            // Set the shapes hash to a random value which forces it to update the mesh in the next frame
            shapeHash.SetValue(_caster, hashCode);
        }
    }

    Vector3[] ConvertArray(Vector2[] v3)
    {
        Vector3[] v2 = new Vector3[v3.Length];
        for (int i = 0; i < v3.Length; i++)
        {
            Vector2 tempV3 = v3[i];
            v2[i] = new Vector3(tempV3.x, tempV3.y);
        }
        return v2;
    }

    public void ShadowRegenerate()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            var child = transform.GetChild(i);
            DestroyImmediate(child.gameObject);
        }

        foreach (var item in _collider2D.World_Paths)
        {
            var caster = Instantiate(_casterPrefab, transform);
            UpdateShadowFromPoints(caster, ConvertArray(item.ToArray()));
        }

        //UpdateShadowFromPoints(_casterPrefab, 
        //    ConvertArray(_collider2D.World_Paths[0].ToArray()).Concat(
        //        ConvertArray(_collider2D.World_Paths[1].ToArray())).ToArray());
    }
}


#if UNITY_EDITOR
[CustomEditor(typeof(ShadowRegenerator))]
public class ShadowRegeneratorEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        var shadow = (ShadowRegenerator)target;
        if (GUILayout.Button("Regenerate Shadow"))
        {
            shadow.ShadowRegenerate();
        }
    }
}
#endif
