#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool properInput(string str){
    for(char ch : str){
        if(!isalpha(ch) && !isspace(ch)){
             return false;
        }
        else{
            return true;
        }
    }
}


string toLowercase(string str){
    for(char &ch : str){
        ch = tolower(ch);
    }
    return str;
}


void Medication(){
     cout << "Is Medication Neede";
    string isMedicationneeded;
    getline(cin,isMedicationneeded);
  
     
    if(!properInput(isMedicationneeded)){
     cout << "Enter proper input y or n";
    }
    if(toLowercase(isMedicationneeded)=="yes" || toLowercase(isMedicationneeded)=="y"){
       cout << "Medicaines Prescribed to patient";
    }
    
}

void DoctorAvailablity(){
     cout << "Is Doctor available?";
    string isDoctorAvailable;
    getline(cin,isDoctorAvailable);
  
    
    if(!properInput(isDoctorAvailable)){
     cout << "Enter proper input y or n";
    }
    else if(toLowercase(isDoctorAvailable)=="yes" || toLowercase(isDoctorAvailable)=="y"){
       cout << "Doctor Available";
    
       string needcheckup;
       cout << "Does the patient need follow up";
       cin >> needcheckup;
       
    if(!properInput(needcheckup)){
     cout << "Enter proper input y or n";
    }
    else if(toLowercase(isDoctorAvailable)=="yes" || toLowercase(isDoctorAvailable)=="y"){
        cout<< "Appoinmet made";
        Medication();
    }
    else{
       Medication();
    }
}
    else{
      cout << "Waiting for Doctor";
       DoctorAvailablity();
    }
}

void NurseAvailability(){
    cout << "Is nurse available?";
    string isNurseAvailable;
    getline(cin,isNurseAvailable);
  
     
    if(!properInput(isNurseAvailable)){
     cout << "Enter proper input y or n";
    }
   else if(toLowercase(isNurseAvailable)=="yes" || toLowercase(isNurseAvailable)=="y"){
       cout << "Nurse Available";
       cout << "checking for health issues";
       DoctorAvailablity();
    }
    else{
      cout << "Waiting for nurse";
       NurseAvailability();
    }
}

void Registeration(){

    cout << "Is the patient have registeration or appoinment";
    string isregistered;
    getline(cin,isregistered);

    if(!properInput(isregistered)){
     cout << "Enter proper input y or n";
    }

    else if(toLowercase(isregistered)=="yes" || toLowercase(isregistered)=="y"){
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

    
    if(!properInput(isemergency)){
     cout << "Enter proper input y or n";
    }
   else if(toLowercase(isemergency) == "yes" || toLowercase(isemergency) == "y"){
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