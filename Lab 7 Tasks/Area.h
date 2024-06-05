#ifndef AREA_H
#define AREA_H

#include "square.h"
#include "triangle.h"
#include "circle.h"

class Area {
public:
    static double calculateArea(const shapes::Square& square);
    static double calculateArea(const shapes::Triangle& triangle);
    static double calculateArea(const shapes::Circle& circle);
};

#endif // AREA_H
