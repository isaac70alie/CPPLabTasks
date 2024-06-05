#include<iostream>
#include<fstream>
using namespace std;

int main () {
    // create and open a text file 
    ofstream MyFile("ExampleFile.txt");

    //close the text file
    MyFile.close();

    return 0;
}