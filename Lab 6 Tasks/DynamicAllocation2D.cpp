#include<iostream>
using namespace std;

int main () {
    int rows;
    int cols;
    cout <<"Enter the number of rows (not exceeding 3) : ";
    cin >>rows;
    if (rows > 3 || rows <= 0) {
        cout <<"You entered an invalid input. Number of rows must be between 1 and 3."<<endl;
        return 1;
    }
    cout <<"Enter number of columns (not exceeding 3): ";
    cin >> cols;
    if (cols > 3 || cols <= 0) {
        cout <<"You entered an invalid input. Number of columns must be between 1 and 3."<<endl;
        return 1;
    }
    //dynamically allocates a 2D array of doubles
    double **array = new double*[rows];
    for (int i = 0; i < rows; i++){
        array[i] = new double[cols];
    }
    // assign values to each element of the array 
    cout <<"Enter values for the array: "<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout <<"Enter value for element ("<<i<<", "<<j<< "): ";
            cin >> array[i][j];
        }
    }
    // output the value of each element of the array
    cout <<"The value of the array :"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout <<array[i][j] <<" ";
        }
        cout << endl;
    }
    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}