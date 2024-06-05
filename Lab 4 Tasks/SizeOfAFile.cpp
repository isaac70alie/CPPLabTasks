//Obtaining the size of a file
#include<iostream>
#include<fstream>
using namespace std;

int main () {
    streampos begin;
    streampos end;

    ifstream myfile("Example.bin" , ios::binary);
    begin = myfile.tellg();
    myfile.seekg (0 , ios::end);
    end = myfile.tellg();
    myfile.close();
    cout <<"Size is : "<<(end-begin)<<" bytes"<<endl;
    return 0;
}