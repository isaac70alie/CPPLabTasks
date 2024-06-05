#include<iostream>
#include<string>
using namespace std;

int main () {
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    //copy str1 into str3
    str3 = str1;
    cout <<"Str3 : "<<str3<<endl;
     
    //concatenate str1 and str2
    str3 = str1 + str2;
    cout <<"Str1 + str2 : "<<str3<<endl;

    //total length of str3 after concatenation
    len =str3.size();
    cout <<"Str3.size() : "<<len<<endl;
    return 0;
}