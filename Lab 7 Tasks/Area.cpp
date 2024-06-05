#include "Area.h"
#include <cmath> // Use <cmath> instead of "math.h" to avoid redefinition issues

double Area::calculateArea(const shapes::Square& square) {
    double side = square.getSideLength();
    return side * side;
}

double Area::calculateArea(const shapes::Triangle& triangle) {
    double base = triangle.getBase();
    double height = triangle.getHeight();
    return 0.5 * base * height;
}

double Area::calculateArea(const shapes::Circle& circle) {
    double radius = circle.getRadius();
    #define M_PI 3.14
    return M_PI * radius * radius;
}
