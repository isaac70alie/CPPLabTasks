#include<iostream>
#include "Rectangle.h"
using namespace std;

int main () {
    float length,width;

    cout <<"Enter the length of the rectangle :";
    cin >> length;
    cout <<"Enter the width of the rectangle :";
    cin >> width;

    //An instance of the rectangle class

    Rectangle rectangle;

    //set length and width of the rectangle using accessor methods

    rectangle.setLength(length);
    rectangle.setWidth(width);

    cout <<"Area of the rectangle is :" << rectangle.calculateArea() <<endl;

    return 0;

}