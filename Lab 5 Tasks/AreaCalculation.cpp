#include<iostream>
#include<cmath>
using namespace std;

//functions to calculate the area of the square, rectangle and triangle respectively
double calculateSquareArea(double side){
    return side * side;
}
double calculateRectangleArea(double length , double width){
    return length * width;
}
double calculateTriangleArea(double base , double height){
    return 0.5 * base * height;
}

int main () {
    int selection;
    double side, length, width, base, height;
    while(true) {
        cout <<"Please select the area of the shape to calculate\n"
               "1. Square\n"
               "2. Rectangle\n"
               "3. Triangle\n"
               "4. Quit program\n\n"
               "Enter selection : ";
               cin >> selection;
               if (selection == 1) {
                    cout <<"Enter the side length of the square : "<<endl;
                    cin >> side;
                    cout <<"The area of the square is: "<<calculateSquareArea(side)<<endl;
                }else if (selection == 2){
                    cout <<"Enter the length of the rectangle : "<<endl;
                    cin >> length;
                    cout <<"Enter the width of the rectangle : "<<endl;
                    cin >> width;
                    cout <<"The area of the rectangle is: "<<calculateRectangleArea(length , width) <<endl;
                }else if (selection == 3) {
                    cout <<"Enter the base length of the triangle : "<<endl;
                    cin >> base;
                    cout <<"Enter the height of the triangle : "<<endl;
                    cin >> height;
                    cout <<"The area of the triangle is: "<<calculateTriangleArea(base , height) << endl;
                }else if (selection == 4) {
                    cout <<"Exiting the program ****"<<endl;
                    break;
                }else{
                    cout <<"Your input was :"<<" "<<selection<<" which is an invalid input"<<endl;
                    cout <<"Please enter a valid input !!!\n\n";
                }
    }
    return 0;
}
