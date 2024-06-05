#include<iostream>
#include "RectangleWithOverloadedConstructor.h"
using namespace std;

int main () {
    Rectangle rectangle1;
    float length1,width1;

    cout <<"Enter the length of the rectangle 1 :";
    cin >> length1;
    cout <<"Enter the width of the rectangle 1 :";
    cin >> width1;

    rectangle1.setLength(length1);
    rectangle1.setWidth(width1);

    cout <<"Area of the rectangle 1 is :" << rectangle1.calculateArea() <<endl;
    // create another instance of the rectangle class using the overloaded constructor
    float length2,width2;
    cout <<"Enter the length of rectangle2 :" ;
    cin >> length2;
    cout <<"Enter the width of rectangle 2 :";
    cin >> width2;

    Rectangle rectangle2(length2,width2);
    cout<<"Area of rectangle 2 :" <<rectangle2.calculateArea()<<endl;
    return 0;
}