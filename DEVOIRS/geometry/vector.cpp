#include "vector.h"
#include "point.h"
#include <cmath>
#include <sstream>

// Implémentation des fonctions pour Vector2f

// Créer un Vector2f à partir de coordonnées x et y
Vector2f MakeV2f(float x, float y) {
    Vector2f v;
    v.x = x;
    v.y = y;
    return v;
}

// Créer un Vector2f à partir de deux Point2f
Vector2f MakeV2f(const Point2f& a, const Point2f& b) {
    Vector2f v;
    v.x = b.x - a.x;
    v.y = b.y - a.y;
    return v;
}

// Additionner deux vecteurs
Vector2f Add(const Vector2f& v1, const Vector2f& v2) {
    Vector2f result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

// Soustraire deux vecteurs
Vector2f Sub(const Vector2f& v1, const Vector2f& v2) {
    Vector2f result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    return result;
}

// multiplier un vecteur par un scalaire
Vector2f Scale(const Vector2f& v, float scalar) {
    Vector2f result;
    result.x = v.x * scalar;
    result.y = v.y * scalar;
    return result;
}

// Produit scalaire de deux vecteurs
float Dot(const Vector2f& v1, const Vector2f& v2) {
    return v1.x *v2.x + v1.y * v2.y;
}

// Longueur d'un vecteur
float Length(const Vector2f& v) {
    return std::sqrt(v.x * v.x + v.y * v.y);
}

// Normaliser un vecteur
Vector2f Normalize(const Vector2f& v) {
    float lon = Length(v);
    if(lon == 0) {
        return MakeV2f(0.0f, 0.0f);
    }
    return Scale(v, 1.0f / lon);
}

// Interpolation linéaire entre deux vecteurs
Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t) {
    Vector2f result;
    result.x = a.x + t * (b.x - a.x);
    result.y = a.y + t * (b.y - a.y);
    return result;
}

// Determinant de deux vecteurs
float Determinant(const Vector2f& a, const Vector2f& b) {
    return a.x * b.y - a.y * b.x;
}

// Représentation en chaine de caractères de Vector2f
std::string ToString(const Vector2f& v) {
    std::ostringstream oss;
    oss << "(" << v.x << ", " << v.y << ")";
    return oss.str();
}