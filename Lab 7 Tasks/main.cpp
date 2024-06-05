#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;
    do {
        cout << "Options:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                double area = Area::calculateArea(square);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                double area = Area::calculateArea(triangle);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                double area = Area::calculateArea(circle);
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != '4');

    return 0;
}
