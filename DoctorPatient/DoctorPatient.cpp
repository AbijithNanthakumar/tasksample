#include <iostream>
#include <cctype>
using namespace std;

string toLowercase(string str){
    for(char &ch : str){
        ch = tolower(ch);
    }
    return str;
}


void process(){
    string isemergency;
    cout << "Is that a emeergency ?";
    getline(cin,isemergency);

    if(toLowercase(isemergency) == "yes" || toLowercase(isemergency) == "y"){
        DoctorAvailablity();
    }
    
}

int main(){
    cout << "Patient Arrives";
    
    process();
}