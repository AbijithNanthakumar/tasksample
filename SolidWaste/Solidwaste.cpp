#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isFormat(string str){
    for(char ch : str){
        if(!isalpha(ch) && !isspace(ch)){
            return false;
        }
    }
    return true;
}
string toLowercase(string str){
    for(char &ch: str){
        ch = tolower(ch);
    }
    return str;
}

void HighEnergy(){
    string 
}

void WasteProcess(){
    cout << "Is this a organic waste? \n";
    string isorganic;
    cin >> isorganic;

    if(!isFormat(isorganic)){
        cout << "Enter the proper input y or n \n";
    }
    if(toLowercase(isorganic) == "yes" || toLowercase(isorganic) == "y"){
        cout << "This is a organic waste. Is this a High energy waste? \n";
        HighEnergy();
    }
    else{
        cout << "This is not a organic waste. Is this Reuseable? \n"
        Reuseable();
    }
}

int main(){
    cout << "Getting Waste";
     
    WasteProcess();

    
}