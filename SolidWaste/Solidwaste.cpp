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

void Recyclable(){
     cout << "Is this Recyclable? \n";
    string isrecycle;
    getline(cin,isrecycle);

    if(!isFormat(isrecycle)){
        cout << "Enter proper input y or n \n";
        Recyclable();
    }
    if(toLowercase(isrecycle)=="yes" || toLowercase(isrecycle)=="y"){
        cout << "This is a RECYCLABLE waste, can be reused for other applications. \n";
        return;
    }
    else{
        cout << "This is not Recyclable also and can be dumbed in LAND FILL. \n";
        
    }
}
void Reuseable(){
    cout << "Is this Reusable? \n";
    string isreuse;
    getline(cin,isreuse);

    if(!isFormat(isreuse)){
        cout << "Enter proper input y or n \n";
        Reuseable();
    }
    if(toLowercase(isreuse)=="yes" || toLowercase(isreuse)=="y"){
        cout << "This is a reusable waste, can be reused for other applications. \n";
        return;
    }
    else{
        cout << "This is not Reusable. \n";
        Recyclable();
    }
}
void HighEnergy(){
    cout << "Is this high Energy ? \n";
    string isHigh;
    getline(cin,isHigh);

    if(!isFormat(isHigh)){
        cout << "Enter proper input y or n \n";
        HighEnergy();
    }
    if(toLowercase(isHigh)=="yes" || toLowercase(isHigh)=="y"){
        cout << "This is a High Energy waste used as BIO-FUEL. \n";
        return;
    }
    else{
        cout << "This is not a High Energy waste, can be used as ORGANIC FERTILIZER. \n";
        return;
    }
}

void WasteProcess(){
    cout << "Is this a organic waste? \n";
    string isorganic;
    getline(cin,isorganic);

    if(!isFormat(isorganic)){
        cout << "Enter the proper input y or n \n";
        WasteProcess();
    }
    if(toLowercase(isorganic) == "yes" || toLowercase(isorganic) == "y"){
        cout << "This is a organic waste. \n";
        HighEnergy();
    }
    else{
        cout << "This is not a organic waste. \n";
        Reuseable();
    }
}

int main(){
    cout << "Getting Waste \n";
     
    WasteProcess();

    
}