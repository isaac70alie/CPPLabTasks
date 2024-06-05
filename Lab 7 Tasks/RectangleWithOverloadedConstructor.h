#ifndef RECTANGLE_WITH_OVERLOADED_CONSTRUCTOR_H
#define RECTANGLE_WITH_OVERLOADED_CONSTRUCTOR_H

class Rectangle {
    private:
    float length;
    float width;

    public:
    Rectangle();
     Rectangle(float l , float w); // overoaded constructor
    ~Rectangle();

    void setLength (float l);
    void setWidth (float w);
    float getLength () const;
    float getWidth () const;

    float calculateArea () const;

};

#endif
