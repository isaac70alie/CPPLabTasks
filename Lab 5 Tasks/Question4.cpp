#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

bool isInteger(const string& inputString){
    for (char c : inputString){
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
int main () {
    // prompt user to enter an integer value btwn 5 and 10
    cout<<"Enter an integer value between 5 and 10: "<<endl;
    int inputValue = 0;
    string inputString;
    while (true) {
        getline(cin , inputString);
        // check if the input value is an integer
        if (!isInteger(inputString)) {
            //output the error message if the input is not an integer
            cout <<"Sorry , you entered an invalid number. Please try again "<<endl;
            continue;
        }
        inputValue = stoi (inputString);// convert an input string to an integer
        //check if the input is btwn 5 and 10
        if (inputValue >= 5 && inputValue <= 10){
            // inform the user that their input value has been accepted
            cout <<"Your input value ("<<inputValue<<") has been accepted ."<<endl;
            break;
        }else{
            //output an error message if the input is outside the specified range
            cout <<"Your entered "<<inputValue<<" ."<<"Please enter a number between 5 and 10. "<<endl;
        }
    }
    return 0;
}