#include <iostream>
#include "Box.h"

using namespace std;

int main() {
    // Creating Box objects and their specifications
    Box box1(6.0, 7.0, 5.0);
    Box box2(12.0, 13.0, 10.0);

    // Calculating volumes
    cout << "Volume of box1: " << box1.GetVolume() << endl;
    cout << "Volume of box2: " << box2.GetVolume() << endl;

    // Adding two Box objects
    Box box3 = box1 + box2;

    // Calculating volume of the resultant Box
    cout << "Volume of box3 (box1 + box2): " << box3.GetVolume() << endl;

    return 0;
}
