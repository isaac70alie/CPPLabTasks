#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

using namespace std;
//function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u'){
            count ++;

        }
    }
    return count;
}
// function to return words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        }else if (!inWord) {
            count ++;
            inWord = true;
        }
    }
    return count;
}
//function to reverse a string 
string reverse(const string& str) {
    return string(str.rbegin(), str.rend() );
}
//function to capitalize the second letter of each word
string capitalizeSecondLetter (const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            }else{
                capitalize = true;
            }
        }else {
            capitalize = false;
        }
    }
    return result;
}
int main () {
    ifstream myFile("textFile.txt");
    // open the tetx file
    string fileData;
    if (myFile.is_open() ) {
        string line;
        while(getline(myFile , line)) {
            fileData += line;// read file contents into fileData 
        
        }
        myFile.close(); // close the file
        // calculate the output number of vowels
        int vowelCount = countVowels(fileData);
        cout << "Number of vowels in the text file : " << vowelCount <<endl;
        // calculate and output number of words 
        int wordCount = countWords(fileData);
        cout << "Number of words in the text file : "<<wordCount<<endl;
        //output the reverse text
        cout <<"Reversed text : "<<reverse(fileData) <<endl;
        //output text with second letter of each word capitalized
        cout <<"Text with second letter capitalized :"<<capitalizeSecondLetter(fileData)<<endl;
        
    }else{
        cerr <<"Unable to open file!!" <<endl;
    }
    return 0;
} 