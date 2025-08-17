#include<iostream>
#include<string>
using namespace std;

bool isFormat(char ch){
    if(!isalpha(ch) && !isspace(ch)){
        return false;
    }
    return true;
}
void process(){
    cout << "The Login process started" << endl;
    int count = 0;

    while(count < 5){
        cout << "Login to Access." << endl;

        cout << "Is the use authorized? (y or n)" <<endl;
        char ch;
        cin >> ch;

        if(!isFormat(ch)){
            cout << "Enter the proper input y or n." << endl;
             continue;
        }
        if(tolower(ch) == 'y'){
            cout << "Granted Access" << endl;
            return ;
        }
        else{
            count++;
        }
    }
    cout << "Account Locked." << endl;

    cout << "Alert!.... Unknown user attempted to login." << endl;
    return;
}

int main(){
    process();
}