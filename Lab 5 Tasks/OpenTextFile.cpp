#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () {
    ifstream myFile("textFile.txt");// open the text file
    if (myFile.is_open()){
        string fileData;
        string line;
        // Read each line of the file and append it to fileData
        while(getline(myFile , line)) {
            fileData += line;
        }
        myFile.close();
        //Now the fileData contains the contents of the text file
        cout <<"Contents of the text file :\n"<<fileData<<endl;
    }else{
        cerr <<"Unable to open file!!!"<<endl;
    }
    return 0;
}