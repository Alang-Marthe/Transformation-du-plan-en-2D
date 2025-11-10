#include"vector.h"

Vector2f MakeV2f(float x, float y)
{
    Vector2f v;
    v.x = x;
    v.y = y;
    return v;
}

Vector2f MakeV2f(const Point2f& a,const Point2f& b)
{
    Vector2f v;
    v.x = b.x - a.x;
    v.y = b.y - a.y;
    return v;
}

Vector2f MakeNullVector()
{
    Vector2f v;
    v.x = 0;
    v.y = 0;
    return v;
}

Vector2f Add(const Vector2f& a,const Vector2f& b)
{
    Vector2f somme;
    somme.x = a.x + b.x;
    somme.y = a.y + b.y;
    return somme;
}

Vector2f Sub(const Vector2f& a,const Vector2f& b)
{
    Vector2f sub;
    sub.x = a.x - b.x;
    sub.y = a.y - b.y;
    return sub; 
}

Vector2f Scale(const Vector2f& v, float scalar)
{
    Vector2f vv;
    vv.x = v.x * scalar;
    vv.y = v.y * scalar;
    return vv; 
}

Vector2f Dot(const Vector2f& a, const Vector2f& b)
{
    Vector2f dot;
    dot.x = a.x * b.x;
    dot.y = a.y * b.y;
    return dot; 
}

float Length(const Vector2f& v)
{
    float norme;
    norme = std::sqrt(std::pow(v.x, 2) + std::pow(v.y, 2));
    return norme;
}

Vector2f Normalize(const Vector2f& v)
{
    Vector2f normalize;
    normalize.x = v.x / Length(v);
    normalize.y = v.y / Length(v);
}

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t)
{
    Vector2f v;
    v.x = (1-t) * a.x + t * b.x;
    v.y = (1-t) * a.y + t * b.y;
    return v;
}

float Determinant(const Vector2f& a, const Vector2f& b)
{
    float determinant;
    determinant = (a.x * b.y) - (b.x * a.y);
    return determinant;
}