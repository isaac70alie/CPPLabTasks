//Writing on a text file
#include<iostream>
#include<fstream>
using namespace std;

int main () {
    ofstream myfile("Example.txt");

    if (myfile.is_open()){
        myfile <<"This is a line."<<endl;
        myfile <<"This is another line."<<endl;
        myfile.close(); 
    }else {
        cout <<"Unable to open the file"<<endl;
    }
    return 0;
}