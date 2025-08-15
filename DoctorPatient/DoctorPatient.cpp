#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string toLowercase(string str){
    for(char &ch : str){
        ch = tolower(ch);
    }
    return str;
}

void DoctorAvailablity(){
     cout << "Is Doctor available?";
    string isDoctorAvailable;
    getline(cin,isDoctorAvailable);
  
    
    for(char ch : isDoctorAvailable){
        if(!isalpha(ch) && !isspace(ch)){
            cout << "Enter proper input y or n";
        }
    }
    
    if(toLowercase(isDoctorAvailable)=="yes" || toLowercase(isDoctorAvailable)=="y"){
       cout << "Nurse Available";
       cout << "checking for health issues";
    }
    else{
      cout << "Patient not registered";
       Registeration();
    }
}

void NurseAvailability(){
    cout << "Is nurse available?";
    string isNurseAvailable;
    getline(cin,isNurseAvailable);
  
    
    for(char ch : isNurseAvailable){
        if(!isalpha(ch) && !isspace(ch)){
            cout << "Enter proper input y or n";
        }
    }
    
    if(toLowercase(isNurseAvailable)=="yes" || toLowercase(isNurseAvailable)=="y"){
       cout << "Nurse Available";
       cout << "checking for health issues";
       DoctorAvailablity();
    }
    else{
      cout << "Patient not registered";
       NurseAvailability();
    }
}

void Registeration(){

    cout << "Is the patient have registeration or appoinment";
    string isregistered;
    getline(cin,isregistered);

    for(char ch : isregistered){
        if(!isalpha(ch) && !isspace(ch)){
            cout << "Enter proper input y or n";
        }
    }
    

    if(toLowercase(isregistered)=="yes" || toLowercase(isregistered)=="y"){
       return NurseAvailability();
    }
    else{
      cout << "Patient not registered";
       Registeration();
    }
    

}
    





void process(){
    string isemergency;
    cout << "Is that a emeergency ?";
    getline(cin,isemergency);

    if(toLowercase(isemergency) == "yes" || toLowercase(isemergency) == "y"){
        DoctorAvailablity();
    }
    else{
        Registeration();
    }
    
}

int main(){
    cout << "Patient Arrives";
    
    process();
}