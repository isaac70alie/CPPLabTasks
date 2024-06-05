#include<iostream>
#include<fstream>
#include<string>
#include<cctype> 
 /*provides declarations for functions to clasify and transform
 individual characters or its for std::toupper */

using namespace std;

int main () {
    ofstream myFile ("textFile.txt"); // create or open the text file
    if (!myFile.is_open()) { // check if the file is opened successfully
        cerr << "Error: Unable to create or open the file !!"<<endl;
        return 1;// Exit with the error code
    }

    myFile <<"This is the Advanced Computer Programming Module.";// write text to the file

    myFile.close();// close the file
    cout <<"The text file created successfully!!"<<endl;
    return 0;
}

