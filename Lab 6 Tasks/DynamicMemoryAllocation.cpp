#include<iostream>
using namespace std;

int main () {
    int* dynamicInteger = new int;
    string* dynamicString = new string;
    cout <<"Enter an integer value :";
    cin >> *dynamicInteger;

    cout <<"Enter a string :";
    cin >> *dynamicString;

    cout <<"The value of the dynamically allocated integer is : "<<*dynamicInteger<<endl;
    cout <<"The value of the dynamically allocated string is :"<<*dynamicString<<endl;

    delete dynamicInteger;
    delete dynamicString;

    return 0;
}
