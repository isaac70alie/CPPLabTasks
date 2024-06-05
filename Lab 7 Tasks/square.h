#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double sideLength;
    public:
        Square();
        Square(double side);
        double getSideLength() const;
        ~Square();
    };
}

#endif // SQUARE_H
