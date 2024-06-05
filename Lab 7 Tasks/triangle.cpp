#include "triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(double base, double height) : base(base), height(height) {}

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    Triangle::~Triangle() {}
}
