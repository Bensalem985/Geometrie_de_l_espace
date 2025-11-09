#include "point.h"
#include "vector.h"
#include <cmath>
#include <sstream>

// Implémentation des fonctions pour Point2f

// Créer un Point2f à partir de coordonnées x et y
Point2f MakeP2f(float x, float y) {
    Point2f p;
    p.x = x;
    p.y = y;
    return p;
}

// Translater un point
Point2f Translate(const Point2f& p, float dx, float dy) {
    Point2f result;
    result.x = p.x + dx;
    result.y = p.y + dy;
    return result;
}

// Translation d'un point par un vecteur
Point2f Translate(const Point2f& p, const Vector2f& v) {
    return Translate(p, v.x, v.y);
}

// Poduit scalaire d'un point par sx et sy
Point2f Scale(const Point2f p, float sx, float sy) {
    Point2f result;
    result.x = p.x * sx;
    result.y = p.y * sy;
    return result;
}

// rotation d'un point
Point2f Scale(const Point2f& p, float angleDegree) {
    const float PI = 3.14159f;
    float angleRad = angleDegree * (PI / 180.0f);
    float cosA = cos(angleRad);
    float sinA = sin(angleRad);
    Point2f result;
    result.x = p.x * cosA - p.y * sinA;
    result.y = p.x * sinA + p.y * cosA;
    return result;
}

// Représentation en chaine de caractères de Point2f
std::string ToString(const Point2f& p) {
    std::ostringstream oss;
    oss << "(" << p.x << ", " << p.y << ")";
    return oss.str();
}