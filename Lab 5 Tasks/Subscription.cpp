#include<iostream>
#include<ctime> // for time
#include<cstdlib> // for rand () and srand()
using namespace std;

int main () {
    srand(time(0)); //This ensures that the rand() generates a different value after running the program
    int daysUntilExpiration = rand()% 12; //generates random integers bwtn 0 and 11
    if (daysUntilExpiration == 0)
    cout<<"Your subscription has expired."<<endl;
    else if (daysUntilExpiration <= 5){
    cout<<"Your subscription expires in "<<daysUntilExpiration<<" days"<<endl;
    cout<<" Renew now and save 10%!"<<endl;
    }
    else if (daysUntilExpiration == 1){
    cout<<"Your subscription expires within a day!"<<endl;
    cout<<"Renew now and save 20%!"<<endl;
    }
    else if (daysUntilExpiration <= 10)
    cout<<"Your subscription will expire soon. Renew now! "<<endl;
    else 
    cout<<"You have active subscription."<<endl;// the default case is used for handling values greater than 10
    return 0;
}