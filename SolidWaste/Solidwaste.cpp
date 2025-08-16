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

void WasteProcess(){
    cout << "Is the waste organic?";
    string isorganic;
    cin >> isorganic;

   
}

int main(){
    cout << "Getting Waste";
     
   
 
    WasteProcess();

    
}