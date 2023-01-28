using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEngine.Profiling;
#endif

//partially derrived from the sebastian lague Field Of View script. 
//this version has many changes and optimizations specific to this tool

namespace FOW
{
	public class FogOfWarRevealer : MonoBehaviour
	{
		[Header("Customization Variables")]
		public float viewRadius = 15;

		[Range(0, 360)]
		public float viewAngle = 360;

		public float unobscuredRadius = 1f;

		public bool addCorners;

		public bool revealHidersInFadeOutZone = true;

		[Header("Technical Variables")]
		public LayerMask obstacleMask;
		public float RaycastResolution = .5f;
		[Range(1, 30)]
		[Tooltip("Higher values will lead to more accurate edge detection, especially at higher distances. however, this will also result in more raycasts.")]
		public int maxEdgeResolveIterations = 10;

		[Range(0, 10)]
		public int numExtraIterations = 3;

		[Range(0, 5)]
		public int numExtraRaysOnIteration = 4;

		[HideInInspector]
		public int fogOfWarID;
		[HideInInspector]
		public int indexID;

		//local variables
		List<ViewCastInfo> viewPoints = new List<ViewCastInfo>();

		[Header("debug, you shouldnt have to mess with this")]
		[Range(.001f, 1)]
		[Tooltip("Lower values will lead to more accurate edge detection, especially at higher distances. however, this will also result in more raycasts.")]
		public float maxAcceptableEdgeAngleDifference = .001f;
		public float edgeDstThreshold = 0.1f;
		public float doubleHitMaxDelta = 0.1f;
		public float doubleHitMaxAngleDelta = 15;
#if UNITY_EDITOR
		public bool logNumRaycasts = false;
		public bool debugMode = false;
		int numRayCasts;
		public float drawRayNoise = 0;
		public bool drawExtraCastLines;
		public bool drawIteritiveLines;
#endif

		private void OnEnable()
		{
			registerRevealer();
		}
		private void OnDisable()
		{
			deregisterRevealer();
		}

		bool isRegistered = false;
		public void registerRevealer()
		{
			if (FogOfWarWorld.instance == null)
			{
				if (!FogOfWarWorld.revealersToRegister.Contains(this))
				{
					FogOfWarWorld.revealersToRegister.Add(this);
				}
				return;
			}
			if (isRegistered)
			{
				Debug.Log("Tried to double register revealer");
				return;
			}
			isRegistered = true;
			fogOfWarID = FogOfWarWorld.instance.registerRevealer(this);
			circleStruct = new FogOfWarWorld.CircleStruct();
			CalculateLineOfSight();
		}

		public void deregisterRevealer()
		{
			if (FogOfWarWorld.instance == null)
			{
				if (FogOfWarWorld.revealersToRegister.Contains(this))
				{
					FogOfWarWorld.revealersToRegister.Remove(this);
				}
				return;
			}
			if (!isRegistered)
			{
				//Debug.Log("Tried to de-register revealer thats not registered");
				return;
			}
			foreach (FogOfWarHider hider in hidersSeen)
			{
				hider.removeSeer(this);
			}
			hidersSeen.Clear();
			isRegistered = false;
			FogOfWarWorld.instance.deRegisterRevealer(this);
		}

		bool circleIsComplete;
		float stepAngleSize;
		Vector3 expectedNextPoint;
		public void CalculateLineOfSight()
		{
#if UNITY_EDITOR
			Profiler.BeginSample("Revealing Hiders");
#endif
			revealHiders();
#if UNITY_EDITOR
			Profiler.EndSample();
			numRayCasts = 0;
#endif
#if UNITY_EDITOR
			Profiler.BeginSample("Line Of Sight");
#endif
			int stepCount = Mathf.RoundToInt(viewAngle * RaycastResolution);
			stepAngleSize = viewAngle / stepCount;

			ViewCastInfo oldViewCast = new ViewCastInfo();
			//ViewCastInfo firstViewCast = ViewCast(Vector3.Angle(transform.forward, Vector3.right) - (viewAngle/2));
			circleIsComplete = Mathf.Approximately(viewAngle, 360);
			float firstAng = 0;
			if (!circleIsComplete)
			{
				firstAng = ((-transform.eulerAngles.y + 360 + 90) % 360) - (viewAngle / 2);
			}
			ViewCastInfo firstViewCast = ViewCast(firstAng);

			if (!circleIsComplete)
			{
				viewPoints.Add(firstViewCast);
			}

			float angleC = 180 - (AngleBetweenVector2(-Vector3.Cross(firstViewCast.normal, Vector3.up), -firstViewCast.direction.normalized) + stepAngleSize);
			float nextDist = (firstViewCast.dst * Mathf.Sin(Mathf.Deg2Rad * stepAngleSize)) / Mathf.Sin(Mathf.Deg2Rad * angleC);
			expectedNextPoint = firstViewCast.point + (-Vector3.Cross(firstViewCast.normal, Vector3.up) * nextDist);

			oldViewCast = firstViewCast;
			for (int i = 1; i < stepCount; i++)
			{
				float angle = firstViewCast.angle + stepAngleSize * i;
				ViewCastInfo newViewCast = ViewCast(angle);

				determineEdge(oldViewCast, newViewCast);

				angleC = 180 - (Mathf.Abs(AngleBetweenVector2(-Vector3.Cross(newViewCast.normal, Vector3.up), -newViewCast.direction.normalized)) + stepAngleSize);
				nextDist = (newViewCast.dst * Mathf.Sin(Mathf.Deg2Rad * stepAngleSize)) / Mathf.Sin(Mathf.Deg2Rad * angleC);
				expectedNextPoint = newViewCast.point + (-Vector3.Cross(newViewCast.normal, Vector3.up) * nextDist);

#if UNITY_EDITOR
				if (debugMode)
				{
					Vector3 dir = DirFromAngle(angle, true);
					if (newViewCast.hit)
						Debug.DrawRay(transform.position, dir * (newViewCast.dst), Color.green);
					else
						Debug.DrawRay(transform.position, dir * (newViewCast.dst), Color.red);
					Debug.DrawLine(newViewCast.point, expectedNextPoint + Vector3.up * .1f, Random.ColorHSV());
				}
#endif

				oldViewCast = newViewCast;
			}

			if (circleIsComplete)
			{
				firstViewCast.angle = 360;
				determineEdge(oldViewCast, firstViewCast);
				if (viewPoints.Count == 0)
				{
					viewPoints.Add(new ViewCastInfo(false, -Vector3.right * viewRadius + transform.position, viewRadius, 180, -Vector3.right, -Vector3.right));
				}
				viewPoints.Add(viewPoints[0]);
			}
			else
			{
				viewPoints.Add(oldViewCast);
			}

#if UNITY_EDITOR
			if (logNumRaycasts)
			{
				Debug.Log($"Number of raycasts this update: {numRayCasts}");
			}
#endif

			applyData();
			viewPoints.Clear();

#if UNITY_EDITOR
			Profiler.EndSample();
#endif
		}
		public List<FogOfWarHider> hidersSeen = new List<FogOfWarHider>();
		Vector3 hiderPosition;
		void revealHiders()
		{
			FogOfWarHider hiderInQuestion;
			float distToHider;
			float sightDist = viewRadius;
			if (revealHidersInFadeOutZone)
				sightDist += FogOfWarWorld.instance.blurDistance;
			for (int i = 0; i < FogOfWarWorld.numHiders; i++)
			{
				hiderInQuestion = FogOfWarWorld.hiders[i];
				distToHider = distBetweenVectors(hiderInQuestion.transform.position, transform.position);
				if (distToHider < unobscuredRadius || (distToHider < sightDist && Mathf.Abs(AngleBetweenVector2(hiderInQuestion.transform.position - transform.position, transform.forward)) < viewAngle / 2))
				{
					hiderPosition.x = hiderInQuestion.transform.position.x;
					hiderPosition.y = transform.position.y;
					hiderPosition.z = hiderInQuestion.transform.position.z;
					if (!Physics.Raycast(transform.position, hiderPosition - transform.position, distToHider, obstacleMask))
					{
						if (!hidersSeen.Contains(hiderInQuestion))
						{
							hidersSeen.Add(hiderInQuestion);
							hiderInQuestion.addSeer(this);
						}
					}
					else
					{
						if (hidersSeen.Contains(hiderInQuestion))
						{
							hidersSeen.Remove(hiderInQuestion);
							hiderInQuestion.removeSeer(this);
						}
					}
				}
				else
				{
					if (hidersSeen.Contains(hiderInQuestion))
					{
						hidersSeen.Remove(hiderInQuestion);
						hiderInQuestion.removeSeer(this);
					}
				}
			}
		}

		FogOfWarWorld.CircleStruct circleStruct;
		Vector2 center = new Vector2();
		public void applyData()
		{
			float[] radii = new float[viewPoints.Count];
			float[] distances = new float[radii.Length];
			bool[] areHits = new bool[radii.Length];

#if UNITY_EDITOR
			if (debugMode)
			{
				Random.InitState(1);
			}
#endif

			for (int i = 0; i < radii.Length; i++)
			{
				//Vector3 difference = viewPoints[i].point - transform.position;
				//float deg = Mathf.Atan2(difference.z, difference.x) * Mathf.Rad2Deg;
				//deg = (deg + 360) % 360;
#if UNITY_EDITOR
				if (debugMode)
				{
					//Debug.Log(deg);
					Debug.DrawRay(transform.position, (viewPoints[i].point - transform.position) + Random.insideUnitSphere * drawRayNoise, Color.blue);

					if (i != 0)
						Debug.DrawLine(viewPoints[i].point, viewPoints[i - 1].point, Color.yellow);
				}
#endif
				radii[i] = viewPoints[i].angle;
				areHits[i] = viewPoints[i].hit;
				distances[i] = viewPoints[i].dst;
				if (i == radii.Length - 1 && circleIsComplete)
				{
					radii[i] += 360;
				}
			}

			center.x = transform.position.x;
			center.y = transform.position.y;

			circleStruct.circleOrigin = center;
			circleStruct.numSegments = radii.Length;
			circleStruct.circleRadius = viewRadius;
			circleStruct.unobscuredRadius = unobscuredRadius;
			circleStruct.isComplete = circleIsComplete;

			FogOfWarWorld.instance.updateCircle(fogOfWarID, circleStruct, radii, distances, areHits);
		}

		bool greaterThanLastAngle;
		void determineEdge(ViewCastInfo oldViewCast, ViewCastInfo newViewCast, int iteration = 0)
		{
			if (oldViewCast.hit != newViewCast.hit)
			{
				if (iteration >= numExtraIterations)
				{
					EdgeInfo farEdge = FindEdge(newViewCast, oldViewCast, true);
					EdgeInfo closeEdge = FindEdge(oldViewCast, newViewCast);
					greaterThanLastAngle = farEdge.maxViewCast.angle > closeEdge.maxViewCast.angle;
					if (newViewCast.dst < oldViewCast.dst)
					{
						if (Mathf.Abs(closeEdge.minViewCast.dst - viewRadius) < .01f || Mathf.Abs(closeEdge.minViewCast.dst - closeEdge.maxViewCast.dst) > .01f)
						{
							viewPoints.Add(closeEdge.minViewCast);
							viewPoints.Add(closeEdge.maxViewCast);
						}
						if (Mathf.Abs(farEdge.minViewCast.dst - farEdge.maxViewCast.dst) > .01f)
						{
							viewPoints.Add(farEdge.maxViewCast);
							viewPoints.Add(farEdge.minViewCast);
						}
					}
					else
					{
						if (Mathf.Abs(closeEdge.minViewCast.dst - closeEdge.maxViewCast.dst) > .01f)
						{
							viewPoints.Add(closeEdge.minViewCast);
							viewPoints.Add(closeEdge.maxViewCast);
						}
						if (Mathf.Abs(farEdge.maxViewCast.dst - viewRadius) < .01f || Mathf.Abs(farEdge.minViewCast.dst - farEdge.maxViewCast.dst) > .01f)
						{
							viewPoints.Add(farEdge.maxViewCast);
							viewPoints.Add(farEdge.minViewCast);
						}
					}
				}
				else
				{
					castExtraRays(oldViewCast.angle, newViewCast.angle, oldViewCast, iteration + 1);
				}
			}
			else if (newViewCast.hit && oldViewCast.hit)
			{
				float ExpectedDelta = Vector3.Distance(expectedNextPoint, newViewCast.point);
				if (ExpectedDelta > doubleHitMaxDelta || Mathf.Abs(AngleBetweenVector2(newViewCast.normal, oldViewCast.normal)) > doubleHitMaxAngleDelta)
				{
					if (iteration >= numExtraIterations)
					{
						bool noneAdded = true;
						if (Vector3.Distance(newViewCast.point, oldViewCast.point) > doubleHitMaxDelta)
						{
							EdgeInfo farEdge = FindEdge(newViewCast, oldViewCast, true);
							EdgeInfo closeEdge = FindEdge(oldViewCast, newViewCast);
							greaterThanLastAngle = farEdge.maxViewCast.angle > closeEdge.maxViewCast.angle;
							if (newViewCast.dst < oldViewCast.dst)
							{
								if (Mathf.Abs(closeEdge.minViewCast.dst - viewRadius) < .01f || Mathf.Abs(closeEdge.minViewCast.dst - closeEdge.maxViewCast.dst) > .01f)
								{
									viewPoints.Add(closeEdge.minViewCast);
									viewPoints.Add(closeEdge.maxViewCast);
									noneAdded = false;
								}
								else
									greaterThanLastAngle = true;
								if (Mathf.Abs(farEdge.minViewCast.dst - farEdge.maxViewCast.dst) > .01f && greaterThanLastAngle)
								{
									viewPoints.Add(farEdge.maxViewCast);
									viewPoints.Add(farEdge.minViewCast);
									noneAdded = false;
								}
							}
							else
							{
								if (Mathf.Abs(closeEdge.minViewCast.dst - closeEdge.maxViewCast.dst) > .01f)
								{
									viewPoints.Add(closeEdge.minViewCast);
									viewPoints.Add(closeEdge.maxViewCast);
									noneAdded = false;
								}
								else
									greaterThanLastAngle = true;
								if ((Mathf.Abs(farEdge.maxViewCast.dst - viewRadius) < .01f || Mathf.Abs(farEdge.minViewCast.dst - farEdge.maxViewCast.dst) > .01f) && greaterThanLastAngle)
								{
									viewPoints.Add(farEdge.maxViewCast);
									viewPoints.Add(farEdge.minViewCast);
									noneAdded = false;
								}
							}
						}
						if (noneAdded)
						{
							float deltaAngle = AngleBetweenVector2(newViewCast.normal, oldViewCast.normal);
							if (deltaAngle < 0)
							{
								EdgeInfo edge = FindMax(newViewCast, oldViewCast);
								viewPoints.Add(edge.maxViewCast);
							}
							else if (addCorners && deltaAngle > 0)
							{
								EdgeInfo edge = FindMax(newViewCast, oldViewCast);
								viewPoints.Add(edge.maxViewCast);
							}
						}

					}
					else
					{
						castExtraRays(oldViewCast.angle, newViewCast.angle, oldViewCast, iteration + 1);
					}
				}

			}
		}

		void castExtraRays(float minAngle, float maxAngle, ViewCastInfo oldViewCast, int iteration)
		{
			float newAngleChange = (maxAngle - minAngle) / numExtraRaysOnIteration;

			float angleC = 180 - (AngleBetweenVector2(-Vector3.Cross(oldViewCast.normal, Vector3.up), -oldViewCast.direction.normalized) + newAngleChange);
			float nextDist = (oldViewCast.dst * Mathf.Sin(Mathf.Deg2Rad * newAngleChange)) / Mathf.Sin(Mathf.Deg2Rad * angleC);
			expectedNextPoint = oldViewCast.point + (-Vector3.Cross(oldViewCast.normal, Vector3.up) * nextDist);

			for (int i = 0; i < numExtraRaysOnIteration + 1; i++)
			{
				float angle = minAngle + (newAngleChange * i);
				ViewCastInfo newViewCast = ViewCast(angle);

				determineEdge(oldViewCast, newViewCast, iteration);

				angleC = 180 - (Mathf.Abs(AngleBetweenVector2(-Vector3.Cross(newViewCast.normal, Vector3.up), -newViewCast.direction.normalized)) + newAngleChange);
				nextDist = (newViewCast.dst * Mathf.Sin(Mathf.Deg2Rad * newAngleChange)) / Mathf.Sin(Mathf.Deg2Rad * angleC);
				expectedNextPoint = newViewCast.point + (-Vector3.Cross(newViewCast.normal, Vector3.up) * nextDist);

#if UNITY_EDITOR
				if (debugMode && drawExtraCastLines)
				{
					Vector3 dir = DirFromAngle(angle, true);
					if (newViewCast.hit)
						Debug.DrawRay(transform.position, dir * (newViewCast.dst), Color.green);
					else
						Debug.DrawRay(transform.position, dir * (newViewCast.dst), Color.red);
					Debug.DrawLine(newViewCast.point, expectedNextPoint + Vector3.up * (.1f / iteration), Random.ColorHSV());
				}
#endif

				oldViewCast = newViewCast;
			}
		}


		Vector2 vec1;
		Vector2 vec2;
		Vector2 vec1Rotated90;
		private float AngleBetweenVector2(Vector3 _vec1, Vector3 _vec2)
		{
			vec1.x = _vec1.x;
			vec1.y = _vec1.y;
			vec2.x = _vec2.x;
			vec2.y = _vec2.y;
			//vec1 = vec1.normalized;
			//vec2 = vec2.normalized;
			vec1Rotated90.x = -vec1.y;
			vec1Rotated90.y = vec1.x;
			//Vector2 vec1Rotated90 = new Vector2(-vec1.y, vec1.x);
			float sign = (Vector2.Dot(vec1Rotated90, vec2) < 0) ? -1.0f : 1.0f;
			return Vector2.Angle(vec1, vec2) * sign;
		}
		float distBetweenVectors(Vector3 _vec1, Vector3 _vec2)
		{
			vec1.x = _vec1.x;
			vec1.y = _vec1.y;
			vec2.x = _vec2.x;
			vec2.y = _vec2.y;
			return Vector2.Distance(vec1, vec2);
		}

		EdgeInfo FindEdge(ViewCastInfo minViewCast, ViewCastInfo maxViewCast, bool isReflect = false)
		{
			float minAngle = minViewCast.angle;
			float maxAngle = maxViewCast.angle;

			for (int i = 0; i < maxEdgeResolveIterations; i++)
			{
				float angle = (minAngle + maxAngle) / 2;
#if UNITY_EDITOR
				if (debugMode && drawIteritiveLines)
				{
					Vector3 dir = DirFromAngle(angle, true);
					Debug.DrawRay(transform.position, dir * (viewRadius + 2), Color.white);
				}
#endif
				ViewCastInfo newViewCast = ViewCast(angle);

				bool edgeDstThresholdExceeded = Mathf.Abs(minViewCast.dst - newViewCast.dst) > edgeDstThreshold;
				edgeDstThresholdExceeded = edgeDstThresholdExceeded || Mathf.Abs(AngleBetweenVector2(newViewCast.normal, minViewCast.normal)) > 0;

				if (newViewCast.hit == minViewCast.hit && !edgeDstThresholdExceeded)
				{
					minViewCast = newViewCast;
					minAngle = angle;
				}
				else
				{
					maxViewCast = newViewCast;
					maxAngle = angle;
				}
				if (Mathf.Abs(maxAngle - minAngle) < maxAcceptableEdgeAngleDifference)
				{
					break;
				}
			}

			return new EdgeInfo(minViewCast, maxViewCast, true);
			//return new EdgeInfo(minPoint, maxPoint);
		}
		EdgeInfo FindMax(ViewCastInfo minViewCast, ViewCastInfo maxViewCast)
		{
			float minAngle = minViewCast.angle;
			float maxAngle = maxViewCast.angle;

			for (int i = 0; i < maxEdgeResolveIterations; i++)
			{
				float angle = (minAngle + maxAngle) / 2;
#if UNITY_EDITOR
				if (debugMode && drawIteritiveLines)
				{
					Vector3 dir = DirFromAngle(angle, true);
					Debug.DrawRay(transform.position, dir * (viewRadius + 2), Color.white);
				}
#endif
				ViewCastInfo newViewCast = ViewCast(angle);

				bool edgeDstThresholdExceeded = Mathf.Abs(minViewCast.dst - newViewCast.dst) > edgeDstThreshold;
				edgeDstThresholdExceeded = edgeDstThresholdExceeded || Mathf.Abs(AngleBetweenVector2(newViewCast.normal, minViewCast.normal)) > 0;
				if (newViewCast.hit == minViewCast.hit && !edgeDstThresholdExceeded)
				{
					minViewCast = newViewCast;
					minAngle = angle;
				}
				else
				{
					maxViewCast = newViewCast;
					maxAngle = angle;
				}
				if (Mathf.Abs(maxAngle - minAngle) < maxAcceptableEdgeAngleDifference)
				{
					break;
				}
			}

			return new EdgeInfo(minViewCast, maxViewCast, true);
		}

		RaycastHit2D[] rayHit = new RaycastHit2D[1];
		ViewCastInfo ViewCast(float globalAngle)
		{
#if UNITY_EDITOR
			numRayCasts++;
#endif
			Vector3 dir = DirFromAngle(globalAngle, true);

			if (Physics2D.RaycastNonAlloc(transform.position, dir, rayHit, viewRadius + FogOfWarWorld.instance.blurDistance, obstacleMask) > 0)
			{
				return new ViewCastInfo(true, rayHit[0].point, rayHit[0].distance, globalAngle, rayHit[0].normal, dir);
			}
			else
			{
				return new ViewCastInfo(false, transform.position + dir * viewRadius, viewRadius, globalAngle, Vector3.zero, dir);
			}
		}

		Vector3 direction = Vector3.zero;
		public Vector3 DirFromAngle(float angleInDegrees, bool angleIsGlobal)
		{
			if (!angleIsGlobal)
			{
				angleInDegrees += transform.eulerAngles.z;
			}
			direction.x = Mathf.Cos(angleInDegrees * Mathf.Deg2Rad);
			direction.y = Mathf.Sin(angleInDegrees * Mathf.Deg2Rad);
			return direction;
			//return new Vector3(Mathf.Cos(angleInDegrees * Mathf.Deg2Rad), 0, Mathf.Sin(angleInDegrees * Mathf.Deg2Rad));
		}

		public struct ViewCastInfo
		{
			public bool hit;
			public Vector3 point;
			public float dst;
			public float angle;
			public Vector3 normal;
			public Vector3 direction;

			public ViewCastInfo(bool _hit, Vector3 _point, float _dst, float _angle, Vector3 _normal, Vector3 dir)
			{
				hit = _hit;
				point = _point;
				dst = _dst;
				angle = _angle;
				normal = _normal;
				direction = dir;
			}
		}

		public struct EdgeInfo
		{
			public ViewCastInfo minViewCast;
			public ViewCastInfo maxViewCast;
			public bool shouldUse;

			public EdgeInfo(ViewCastInfo _pointA, ViewCastInfo _pointB, bool _shouldUse)
			{
				minViewCast = _pointA;
				maxViewCast = _pointB;
				shouldUse = _shouldUse;
			}
		}
	}
}