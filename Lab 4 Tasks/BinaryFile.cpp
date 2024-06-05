//Reading an entire binary file
#include<iostream>
#include<fstream>
using namespace std;

int main () {
    streampos size;
    char * memblock;

    ifstream file ("Example.bin" , ios::in|ios::binary|ios::ate);
    if (file.is_open()) {
        size = file.tellg();
        memblock = new char [size];
        file.seekg(0 , ios::beg);
        file.read(memblock , size);
        file.close();

        cout <<"The entire file content is in memory";

        delete[] memblock;
        memblock = nullptr;
    }else {
        cout <<"Unable to open the file";
    }
    return 0;
}