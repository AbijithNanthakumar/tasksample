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

// Input:::: getting :::: block 
bool yesOrNo(){
    string input;
    getline(cin,input );

    bool flag;

    if(!isFormat(input)){
       cout << "Enter the proper input yes or no";
       return false;        
    }
    if(toLowercase(input) == "yes" || toLowercase(input) == "y"){
        return true;
    }
    else{
        return false;
    }
}

string toLowercase(string str){
    for(char &ch: str){
        ch = tolower(ch);
    }
    return str;
}

void HighEnergy(){
    string HighEnergy;
    getline(cin,HighEnergy);

    if(!isFormat(HighEnergy)){
       cout << "Enter the proper input y or n \n";
    }
    if(toLowercase(HighEnergy)=="yes" || toLowercase(HighEnergy) == "y"){
        cout << "This is a High energy source. Which means it is a BIO-FUEL. \n";
    }
    
}

void WasteProcess(){
    cout << "Is the waste organic? \n";
    yesOrNo();

    if(yesOrNo){
        cout << "This is an organic waste? \n";
    }
    // string isorganic;
    // getline(cin,isorganic);

    // if(!isFormat(isorganic)){
    //    cout << "Enter the proper input y or n \n";
    // }
    // if(toLowercase(isorganic)=="yes" || toLowercase(isorganic) == "y"){
    //     cout << "This is Organic. Is this High enrgy waste? \n";

    //     HighEnergy();
    // }
    // else{
        
    // }

   
}

int main(){
    cout << "Getting Waste";
     
    WasteProcess();

    
}