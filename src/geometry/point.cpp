#include"point.h"

Point2f MakeP2f(float x, float y)
{
    Point2f p;
    p.x = x;
    p.y = y;
    return p;
}

Point2f MakeNullPoint()
{
     Point2f p;
    p.x = 0;
    p.y = 0;
    return p;
}

Point2f Translate(const Point2f& p, float dx, float dy)
{
    Point2f pp;
    pp.x = p.x + dx;
    pp.y = p.y + dy;
    return pp;
}

Point2f Translate(const Point2f& p, const Vector2f& v)
{
    Point2f pp;
    
    pp.x = p.x + v.x;
    pp.y = p.y + v.y;
    return pp;
}

Point2f Scale(const Point2f& p, float sx, float sy)
{
    Point2f pp;
    float k;
    pp.x = sx + k*(p.x - sx);
    pp.y = sy + k*(p.y - sy);
    return pp;
}

Point2f Scale(const Point2f& p, const Vector2f& s)
{
    Point2f pp;
    float k;
    pp.x = s.x + k*(p.x - s.x);
    pp.y = s.y + k*(p.y - s.y);
    return pp;
}

Point2f Rotate(const Point2f& p, float angleDegree)
{
    Point2f pp;

    pp.x = p.x * std::cos(angleDegree) - p.y * std::sin(angleDegree);
    pp.y = p.x * std::sin(angleDegree) - p.y * std::cos(angleDegree);
    return pp;

}