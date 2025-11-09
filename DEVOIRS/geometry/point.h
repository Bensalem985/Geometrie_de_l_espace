#ifndef POINT_H
#define POINT_H

#include <string>
#include "vector.h"

// Définition de la structure Point2f
struct Point2f {
    float x;
    float y;
};

// Déclaration des fonctions pour Point2f
Point2f MakeP2f(float x, float y);
Point2f Translate(const Point2f& p, float dx, float dy);
Point2f Translate(const Point2f& p, const Vector2f& v);
Point2f Scale(const Point2f p, float sx, float sy);
Point2f Scale(const Point2f& p, float angleDegree);
std::string ToString(const Point2f& p);

#endif