//Reading a text file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () {
    string myText;
    ifstream myfile ("Example.txt");
    if (myfile.is_open()) {
        while( getline (myfile , myText )){
            cout <<myText<<endl;
        }
        myfile.close();
    }else {
        cout <<"Unable to open the file "<<endl;
    }
    return 0;

}