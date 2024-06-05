#include<iostream>
using namespace std;

void swapNumbers(int* x , int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int varA = 25;
    int varB = 100;

    cout << "VarA before swap :" << varA<<endl;
    cout <<"VarB before swap : " << varB<<endl;

    swapNumbers ( &varA, &varB);
    
     cout <<"VarA after swap :" <<varA<<endl;
     cout <<"VarB after swap :" <<varB<<endl;
    
     return 0;
     
}