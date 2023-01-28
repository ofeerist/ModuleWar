#ifndef _CONESETUP_
#define _CONESETUP_

struct circleStruct
{
    float2 circleOrigin;
    int startIndex;
    int numSegments;
    float circleRadius;
    float unobscuredRadius;
    bool isComplete;
};
struct ConeEdgeStruct
{
    float edgeAngle;
    float length;
    bool cutShort;
};

float _extraRadius;

float _fadeOutDistance;

int _NumCircles;
StructuredBuffer<int> _ActiveCircleIndices;
StructuredBuffer<circleStruct> _CircleBuffer;
StructuredBuffer<ConeEdgeStruct> _ConeBuffer;

void NoBleedCheck_float(float2 Position, out float Out)
{
    Out = 0;
    
#ifndef SHADERGRAPH_PREVIEW
    for (int i = 0; i < _NumCircles; i++)
    {
        circleStruct circle = _CircleBuffer[_ActiveCircleIndices[i]];
        float distToCircleOrigin = distance(Position, circle.circleOrigin);
        if (distToCircleOrigin < circle.circleRadius)
        {
            float2 relativePosition = Position - circle.circleOrigin;
            float deg = degrees(atan2(relativePosition.y, relativePosition.x));
            
            ConeEdgeStruct previousCone = _ConeBuffer[circle.startIndex];
            for (int c = 0; c < circle.numSegments; c++)
            {
                float prevAng = previousCone.edgeAngle;
                ConeEdgeStruct currentCone = _ConeBuffer[circle.startIndex + c];
                
                if (circle.isComplete)
                {
                    deg = (deg + 360) % 360;
                    if (c == circle.numSegments - 1 && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                else
                {
                    if (prevAng > 0 && currentCone.edgeAngle > 0)
                    {
                        deg = (deg + 360) % 360;
                    }
                    if ((prevAng > 360 || currentCone.edgeAngle > 360) && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                
                if (deg > prevAng && currentCone.edgeAngle > deg)
                {
                    //old method
                    //float angle_a = currentCone.edgeAngle - previousCone.edgeAngle;
                    //float long_side = sqrt((previousCone.length * previousCone.length) + (currentCone.length * currentCone.length) - (2 * previousCone.length * currentCone.length * cos(radians(angle_a)))); //law of cosines
                    
                    //float angle_b = asin(currentCone.length * sin(radians(angle_a)) / long_side); //law of sines
                    //float angle_a1 = 180 - (deg - previousCone.edgeAngle + degrees(angle_b));
                    //float distToEdge = previousCone.length * sin(angle_b) / sin(radians(angle_a1));
                    
                    //float2 lowerPoint = float2(sin(radians(previousCone.edgeAngle)), cos(radians(previousCone.edgeAngle))) * previousCone.length;
                    //float2 upperPoint = float2(sin(radians(deg)), cos(radians(deg))) * distToEdge;
                    
                    //float lerpVal = distance(lowerPoint, upperPoint) / long_side;
                    

                    float lerpVal = (deg - prevAng) / (currentCone.edgeAngle - prevAng);
                    float distToConeEnd = lerp(previousCone.length, currentCone.length, lerpVal);
                    
                    //if (abs(previousCone.length - circle.circleRadius) > .001 || abs(currentCone.length - circle.circleRadius) > .001)
                    if (previousCone.cutShort && currentCone.cutShort)
                    {
                        float2 start = circle.circleOrigin + float2(cos(radians(prevAng)), sin(radians(prevAng))) * previousCone.length;
                        float2 end = circle.circleOrigin + float2(cos(radians(currentCone.edgeAngle)), sin(radians(currentCone.edgeAngle))) * currentCone.length;
                        
                        float a1 = end.y - start.y;
                        float b1 = start.x - end.x;
                        float c1 = a1 * start.x + b1 * start.y;
                    
                        float a2 = Position.y - circle.circleOrigin.y;
                        float b2 = circle.circleOrigin.x - Position.x;
                        float c2 = a2 * circle.circleOrigin.x + b2 * circle.circleOrigin.y;
                    
                        float determinant = (a1 * b2) - (a2 * b1);
                    
                        float x = (b2 * c1 - b1 * c2) / determinant;
                        float y = (a1 * c2 - a2 * c1) / determinant;
                    
                        float2 intercection = float2(x, y);
                        distToConeEnd = distance(intercection, circle.circleOrigin) + _extraRadius;
                    }
                    distToConeEnd = max(distToConeEnd, circle.unobscuredRadius);
                    
                    if (distToCircleOrigin < distToConeEnd)
                    {
                        Out = 1;
                        return;
                    }
                }
                
                previousCone = currentCone;
            }
            if (distToCircleOrigin < circle.unobscuredRadius)
            {
                Out = 1;
                return;
            }
        }
    }
#endif
}

void NoBleedCheckHQ_float(float2 Position, out float Out)
{
    Out = 0;
    
#ifndef SHADERGRAPH_PREVIEW
    for (int i = 0; i < _NumCircles; i++)
    {
        circleStruct circle = _CircleBuffer[_ActiveCircleIndices[i]];
        float distToCircleOrigin = distance(Position, circle.circleOrigin);
        if (distToCircleOrigin < circle.circleRadius + _fadeOutDistance)
        {
            float2 relativePosition = Position - circle.circleOrigin;
            float deg = degrees(atan2(relativePosition.y, relativePosition.x));
            
            ConeEdgeStruct previousCone = _ConeBuffer[circle.startIndex];
            for (int c = 0; c < circle.numSegments; c++)
            {
                float prevAng = previousCone.edgeAngle;
                ConeEdgeStruct currentCone = _ConeBuffer[circle.startIndex + c];
                
                if (circle.isComplete)
                {
                    deg = (deg + 360) % 360;
                    if (c == circle.numSegments - 1 && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                else
                {
                    if (prevAng > 0 && currentCone.edgeAngle > 0)
                    {
                        deg = (deg + 360) % 360;
                    }
                    if ((prevAng > 360 || currentCone.edgeAngle > 360) && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                
                if (deg > prevAng && currentCone.edgeAngle > deg)
                {
                    float lerpVal = (deg - prevAng) / (currentCone.edgeAngle - prevAng);
                    float distToConeEnd = lerp(previousCone.length, currentCone.length, lerpVal);
                    
                    float newBlurDistance = (distToConeEnd / circle.circleRadius) * _fadeOutDistance;
                    
                    //if (abs(previousCone.length - circle.circleRadius) > .001 || abs(currentCone.length - circle.circleRadius) > .001)
                    if (previousCone.cutShort && currentCone.cutShort)
                    {
                        float2 start = circle.circleOrigin + float2(cos(radians(prevAng)), sin(radians(prevAng))) * previousCone.length;
                        float2 end = circle.circleOrigin + float2(cos(radians(currentCone.edgeAngle)), sin(radians(currentCone.edgeAngle))) * currentCone.length;
                        
                        float a1 = end.y - start.y;
                        float b1 = start.x - end.x;
                        float c1 = a1 * start.x + b1 * start.y;
                    
                        float a2 = Position.y - circle.circleOrigin.y;
                        float b2 = circle.circleOrigin.x - Position.x;
                        float c2 = a2 * circle.circleOrigin.x + b2 * circle.circleOrigin.y;
                    
                        float determinant = (a1 * b2) - (a2 * b1);
                    
                        float x = (b2 * c1 - b1 * c2) / determinant;
                        float y = (a1 * c2 - a2 * c1) / determinant;
                    
                        float2 intercection = float2(x, y);
                        distToConeEnd = distance(intercection, circle.circleOrigin);
                        newBlurDistance = 0;
                        if (distToConeEnd > circle.circleRadius)
                        {
                            newBlurDistance = distToConeEnd - circle.circleRadius;
                            distToConeEnd = circle.circleRadius;
                        }
                        distToConeEnd += _extraRadius;
                        newBlurDistance += _extraRadius;
                    }
                    distToConeEnd = max(distToConeEnd, circle.unobscuredRadius);
                    
                    if (distToCircleOrigin < distToConeEnd + newBlurDistance)
                    {
                        if (distToCircleOrigin < distToConeEnd)
                        {
                            Out = 1;
                            return;
                        }
                        Out = max(Out, lerp(0, 1, ((distToConeEnd + _fadeOutDistance) - distToCircleOrigin) / _fadeOutDistance));
                        break;
                    }
                }
                
                previousCone = currentCone;
            }
            if (distToCircleOrigin < circle.unobscuredRadius)
            {
                Out = 1;
                return;
            }
        }
    }
#endif
}

void ConeCheck_float(float2 Position, out float Out)
{
    Out = 0;
    
#ifndef SHADERGRAPH_PREVIEW
    for (int i = 0; i < _NumCircles; i++)
    {
        circleStruct circle = _CircleBuffer[_ActiveCircleIndices[i]];
        float distToCircleOrigin = distance(Position, circle.circleOrigin);
        if (distToCircleOrigin < circle.circleRadius)
        {
            float2 relativePosition = Position - circle.circleOrigin;
            float deg = degrees(atan2(relativePosition.y, relativePosition.x));
            //deg = (deg + 360) % 360;
            
            ConeEdgeStruct previousCone = _ConeBuffer[circle.startIndex];
            for (int c = 0; c < circle.numSegments;  c++)
            {
                float prevAng = previousCone.edgeAngle;
                ConeEdgeStruct currentCone = _ConeBuffer[circle.startIndex + c];
                
                if (circle.isComplete)
                {
                    deg = (deg + 360) % 360;
                    if (c == circle.numSegments - 1 && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                else
                {
                    if (prevAng > 0 && currentCone.edgeAngle > 0)
                    {
                        deg = (deg + 360) % 360;
                    }
                    if ((prevAng > 360 || currentCone.edgeAngle > 360) && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                
                if (deg > prevAng && currentCone.edgeAngle > deg)
                {
                    //old method
                    //float angle_a = currentCone.edgeAngle - previousCone.edgeAngle;
                    //float long_side = sqrt((previousCone.length * previousCone.length) + (currentCone.length * currentCone.length) - (2 * previousCone.length * currentCone.length * cos(radians(angle_a)))); //law of cosines
                    
                    //float angle_b = asin(currentCone.length * sin(radians(angle_a)) / long_side); //law of sines
                    //float angle_a1 = 180 - (deg - previousCone.edgeAngle + degrees(angle_b));
                    //float distToEdge = previousCone.length * sin(angle_b) / sin(radians(angle_a1));
                    
                    //float2 lowerPoint = float2(sin(radians(previousCone.edgeAngle)), cos(radians(previousCone.edgeAngle))) * previousCone.length;
                    //float2 upperPoint = float2(sin(radians(deg)), cos(radians(deg))) * distToEdge;
                    
                    //float lerpVal = distance(lowerPoint, upperPoint) / long_side;
                    

                    float lerpVal = (deg - prevAng) / (currentCone.edgeAngle - prevAng);
                    float distToConeEnd = lerp(previousCone.length, currentCone.length, lerpVal);

                    if (previousCone.cutShort && currentCone.cutShort)
                    {
                        float2 start = circle.circleOrigin + float2(cos(radians(prevAng)), sin(radians(prevAng))) * previousCone.length;
                        float2 end = circle.circleOrigin + float2(cos(radians(currentCone.edgeAngle)), sin(radians(currentCone.edgeAngle))) * currentCone.length;
                        
                        float a1 = end.y - start.y;
                        float b1 = start.x - end.x;
                        float c1 = a1 * start.x + b1 * start.y;
                    
                        float a2 = Position.y - circle.circleOrigin.y;
                        float b2 = circle.circleOrigin.x - Position.x;
                        float c2 = a2 * circle.circleOrigin.x + b2 * circle.circleOrigin.y;
                    
                        float determinant = (a1 * b2) - (a2 * b1);
                    
                        float x = (b2 * c1 - b1 * c2) / determinant;
                        float y = (a1 * c2 - a2 * c1) / determinant;
                    
                        float2 intercection = float2(x, y);
                        distToConeEnd = distance(intercection, circle.circleOrigin) + _extraRadius;
                        
                        //to add the cone
                        float2 rotPoint = (start + end) / 2;
                        float2 arcOrigin = rotPoint + (float2(-(end.y - rotPoint.y), (end.x - rotPoint.x)) * 3);
                        float arcLength = distance(start, arcOrigin);
                        float2 newRelativePosition = arcOrigin + normalize(Position - arcOrigin) * arcLength;
                        distToConeEnd += distance(intercection, newRelativePosition) / 2;
                    }
                    distToConeEnd = max(distToConeEnd, circle.unobscuredRadius);
                    
                    if (distToCircleOrigin < distToConeEnd)
                    {
                        Out = 1;
                        return;
                    }
                }
                
                previousCone = currentCone;
            }
            if (distToCircleOrigin < circle.unobscuredRadius)
            {
                Out = 1;
                return;
            }
        }
    }
#endif
}

void ConeCheckHQ_float(float3 Position, out float Out)
{
    Out = 0;
#ifndef SHADERGRAPH_PREVIEW
    for (int i = 0; i < _NumCircles; i++)
    {
        circleStruct circle = _CircleBuffer[_ActiveCircleIndices[i]];
        float distToCircleOrigin = distance(Position, circle.circleOrigin);
        if (distToCircleOrigin < circle.circleRadius + _fadeOutDistance)
        {
            float2 relativePosition = Position - circle.circleOrigin;
            float deg = degrees(atan2(relativePosition.y, relativePosition.x));
            //deg = (deg + 360) % 360;
            
            ConeEdgeStruct previousCone = _ConeBuffer[circle.startIndex];
            
            for (int c = 0; c < circle.numSegments; c++)
            {
                float prevAng = previousCone.edgeAngle;
                ConeEdgeStruct currentCone = _ConeBuffer[circle.startIndex + c];
                
                if (circle.isComplete)
                {
                    deg = (deg + 360) % 360;
                    if (c == circle.numSegments - 1 && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                else
                {
                    if (prevAng > 0 && currentCone.edgeAngle > 0)
                    {
                        deg = (deg + 360) % 360;
                    }
                    if ((prevAng > 360 || currentCone.edgeAngle > 360) && deg < prevAng)
                    {
                        deg += 360;
                    }
                }
                
                if (deg > prevAng && currentCone.edgeAngle > deg)
                {
                    float lerpVal = (deg - prevAng) / (currentCone.edgeAngle - prevAng);
                    float distToConeEnd = lerp(previousCone.length, currentCone.length, lerpVal);
                    
                    float newBlurDistance = (distToConeEnd / circle.circleRadius) * _fadeOutDistance;
                    
                    //if (abs(previousCone.length - circle.circleRadius) > .001 || abs(currentCone.length - circle.circleRadius) > .001)
                    if (previousCone.cutShort && currentCone.cutShort)
                    {
                        float2 start = circle.circleOrigin + float2(cos(radians(prevAng)), sin(radians(prevAng))) * previousCone.length;
                        float2 end = circle.circleOrigin + float2(cos(radians(currentCone.edgeAngle)), sin(radians(currentCone.edgeAngle))) * currentCone.length;
                        
                        float a1 = end.y - start.y;
                        float b1 = start.x - end.x;
                        float c1 = a1 * start.x + b1 * start.y;
                    
                        float a2 = Position.y - circle.circleOrigin.y;
                        float b2 = circle.circleOrigin.x - Position.x;
                        float c2 = a2 * circle.circleOrigin.x + b2 * circle.circleOrigin.y;
                    
                        float determinant = (a1 * b2) - (a2 * b1);
                    
                        float x = (b2 * c1 - b1 * c2) / determinant;
                        float y = (a1 * c2 - a2 * c1) / determinant;
                    
                        float2 intercection = float2(x, y);
                        distToConeEnd = distance(intercection, circle.circleOrigin) + _extraRadius;
                        
                        newBlurDistance = 0;
                        if (distToConeEnd > circle.circleRadius)
                        {
                            newBlurDistance = distToConeEnd - circle.circleRadius;
                            distToConeEnd = circle.circleRadius;
                        }
                        distToConeEnd += _extraRadius;
                        newBlurDistance += _extraRadius;
                        
                        //to add the cone
                        float2 rotPoint = (start + end) / 2;
                        float2 arcOrigin = rotPoint + (float2(-(end.y - rotPoint.y), (end.x - rotPoint.x)) * 3);
                        float arcLength = distance(start, arcOrigin);
                        float2 newRelativePosition = arcOrigin + normalize(Position - arcOrigin) * arcLength;
                        newBlurDistance += distance(intercection, newRelativePosition) / 2;
                    }
                    distToConeEnd = max(distToConeEnd, circle.unobscuredRadius);
                    
                    if (distToCircleOrigin < distToConeEnd + newBlurDistance)
                    {
                        if (distToCircleOrigin < distToConeEnd)
                        {
                            Out = 1;
                            return;
                        }
                        Out = max(Out, lerp(0, 1, ((distToConeEnd + _fadeOutDistance) - distToCircleOrigin) / _fadeOutDistance));
                        break;
                    }
                }
                
                previousCone = currentCone;
            }
            if (distToCircleOrigin < circle.unobscuredRadius)
            {
                Out = 1;
                return;
            }
        }
    }
#endif
}
#endif