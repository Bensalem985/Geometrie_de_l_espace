#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"
#include <iostream>

int main() {
    
    std::cout << "\n\n================================" << std::endl;
    std::cout << "* GEOMETRIE DE L'ESPACE EN C++ *" << std::endl;
    std::cout << "================================" << std::endl;

    // 1. Creation et Affichage
    std::cout << "\n--- 1. Creation de point et de vecteurs ---" << std::endl << std::endl;
    Point2f p1 = MakeP2f(5.0f, 1.0f);
    Vector2f v1 = MakeV2f(3.0f, 4.0f);
    Vector2f v2 = MakeV2f(-1.0f, 0.5f);
    std::cout << "Point p1: ";
    Print(p1);
    std::cout << "Vecteur v1: ";
    Print(v1);
    std::cout << "Vecteur v2: ";
    Print(v2);

    // 2. Operations sur les Points
    std::cout << "\n--- 2. Operations sur les Points ---" << std::endl << std::endl;
    // Translation
    Point2f p2 = Translate(p1, 2.0f, -3.0f);
    std::cout << "Translation de p1 par (2, -3):";
    Print(p2);

    Point2f p3 = Translate(p2, v1);
    std::cout << "Translation de p2 par v1:";
    Print(p3);

    // Produit scalaire
    Point2f p_scaled = Scale(p1, 2.0f, 10.0f);
    std::cout << "Produit scalaire de p1 par (2, 10):";
    Print(p_scaled);

    // Rotation
    Point2f p_rotated = Scale(p1, 90.0f);
    std::cout << "Rotation de p1 de 90 deg:";
    Print(p_rotated);

    // 3. Operations sur les Vecteurs
    std::cout << "\n--- 3. Operations sur les Vecteurs ---" << std::endl << std::endl;
    // Addition
    Vector2f v_add = Add(v1, v2);
    std::cout << "Addition de v1 et v2:";
    Print(v_add);

    // Soustraction
    Vector2f v_sub = Sub(v1, v2);
    std::cout << "Soustraction de v1 et v2:";
    Print(v_sub);

    // Multiplication par scalaire
    Vector2f v_scaled = Scale(v1, 2.5f);
    std::cout << "v1 multiplié par 2.5:";
    Print(v_scaled);

    // Longueur
    float len_v1 = Length(v1);
    std::cout << "Longueur de v1:";
    Print(len_v1);

    // Produit scalaire
    float dot_prod = Dot(v1, v2);
    std::cout << "Produit scalaire de v1 et v2:";
    Print(dot_prod);

    // Normalisation
    Vector2f v_norm = Normalize(v1);
    std::cout << "v1 normalise: ";
    Print(v_norm);

    // determinant
    float det = Determinant(v1, v2);
    std::cout << "Determinant de v1 et v2:";
    Print(det);

    std::cout << "\n --- Tests termines ---" << std::endl;

    return 0;
}