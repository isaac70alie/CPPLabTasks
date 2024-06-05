#include<iostream>
using namespace std;

int main () {
    int * pPointer = nullptr;

    int numbersArray[3] = {10,20,30};

    //assign the address of the first element to pointer
    pPointer = numbersArray;

    //output the address of the first element
    cout <<"Address of pPointer : "<<pPointer<<endl;
    cout <<"Address of numbersArray[0] : "<<numbersArray<<endl;

    //output the value if the first element using the pointer and indirection

    cout <<"The value at pPointer : "<<*pPointer<<endl;

    //This outputs the value of the second element

    cout <<"The value at ++pPointer : "<<*(++pPointer)<<endl;

    //assign the address of the fitrst element to the pointer

    pPointer = numbersArray;

    //this outputs the value of the first element
    cout <<"The value at pPointer++ : "<<*(pPointer++)<<endl;
    return 0;
}