#include<iostream>
using namespace std;

int main () {
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign the pointer with the address of the first value
    pPointer = &firstValue;
    *pPointer = 10;        //indirection

    //assign the pointer with the address of the second value
      pPointer = &secondValue;
    *pPointer = 20;        //indirection

    cout <<"First value is : "<<firstValue<<endl;
    cout <<"Second value is : "<<secondValue<<endl;
    return 0;
  
}