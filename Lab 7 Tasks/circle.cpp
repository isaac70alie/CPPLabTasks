#include "circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(double radius) : radius(radius) {}

    double Circle::getRadius() const {
        return radius;
    }

    Circle::~Circle() {}
}
