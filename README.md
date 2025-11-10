# Projet transformation du plan en 2D.
## Description:
Ce projet concerne les différentes transformations en 2D que l'on peut faire sur des points et des vecteurs,pour celà il a été mis sur pied des structures et fonctions qui nous permettront d'effectuer ces différentes transformations.

```bash
Structures principales:

Struct point2f{
      float x;
      float y;
    }

point2f p;

Struct vector2f{
      float x;
      float y;
      }
vector2f v;
```

### Fonctions principales vecteur:
- Vector2f MakeV2f(float x, float y);
- Vector2f MakeV2f(const Point2f& a, const Point2f& b);
- Vector2f Add(const Vector2f& a, const Vector2f& b);
- Vector2f Sub(const Vector2f& a, const Vector2f& b);
- Vector2f Scale(const Vector2f& v, float scalar);
- float Dot(const Vector2f& a, const Vector2f& b);
- float Length(const Vector2f& v);
- Vector2f Normalize(const Vector2f& v);
- Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t);
- float Determinant(const Vector2f& a, const Vector2f& b);

### Fonctions principales points:
- Point2f MakeP2f(float x, float y);
- Point2f Translate(const Point2f& p, float dx, float dy);
- Point2f Translate(const Point2f& p, const Vector2f& v);
- Point2f Scale(const Point2f& p, float sx, float sy);
- Point2f Scale(const Point2f& p, const Vector2f& s);
- Point2f Rotate(const Point2f& p, float angleDegree);