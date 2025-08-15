#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool properInput(string str){
    for(char ch : str){
        if(!isalpha(ch) && !isspace(ch)){
             return false;
        }
    }
      return true;

}


string toLowercase(string str){
    for(char &ch : str){
        ch = tolower(ch);
    }
    return str;
}


void Medication(){
     string isMedicationneeded;
     cout << "Is Medication Needed? \n";
     cin.ignore(); // getline takes the space into account::::
    getline(cin,isMedicationneeded);
  
     
    if(!properInput(isMedicationneeded)){
     cout << "Enter proper input y or n \n";
    }
    if(toLowercase(isMedicationneeded)=="yes" || toLowercase(isMedicationneeded)=="y"){
       cout << "Medicaines Prescribed to patient \n";
    }
    
}

void DoctorAvailablity(){
     cout << "Is Doctor available? \n";
    string isDoctorAvailable;
    getline(cin,isDoctorAvailable);
  
    
    if(!properInput(isDoctorAvailable)){
     cout << "Enter proper input y or n \n";
    }
    else if(toLowercase(isDoctorAvailable)=="yes" || toLowercase(isDoctorAvailable)=="y"){
       cout << "Doctor Available \n";
    
       string needcheckup;
       cout << "Does the patient need follow up \n";
       cin >> needcheckup;
       

if(!properInput(needcheckup)){
     cout << "Enter proper input y or n \n";
    }
    else if(toLowercase(needcheckup)=="yes" || toLowercase(needcheckup)=="y"){
        cout<< "Appoinmet made \n";
        Medication();
    }
    else{
       Medication();
    }
 
}
    else{
      cout << "Waiting for Doctor \n";
       DoctorAvailablity();
    }
}

void NurseAvailability(){
    cout << "Is nurse available? \n";
    string isNurseAvailable;
    getline(cin,isNurseAvailable);
  
     
    if(!properInput(isNurseAvailable)){
     cout << "Enter proper input y or n \n";
    }
   else if(toLowercase(isNurseAvailable)=="yes" || toLowercase(isNurseAvailable)=="y"){
       cout << "Nurse Available \n";
       cout << "checking for health issues \n";
       DoctorAvailablity();
    }
    else{
      cout << "Waiting for nurse \n";
       NurseAvailability();
    }
}

void Registeration(){

    cout << "Is the patient have registeration or appoinment \n";
    string isregistered;
    getline(cin,isregistered);

    if(!properInput(isregistered)){
     cout << "Enter proper input y or n \n";
    }

    else if(toLowercase(isregistered)=="yes" || toLowercase(isregistered)=="y"){
       return NurseAvailability();
    }
    else{
      cout << "Patient not registered \n";
       Registeration();
    }
    

}
void process(){
    string isemergency;
    cout << "Is that a emeergency ? \n";
    getline(cin,isemergency);

    
    if(!properInput(isemergency)){
     cout << "Enter proper input y or n \n";
    }
   else if(toLowercase(isemergency) == "yes" || toLowercase(isemergency) == "y"){
        DoctorAvailablity();
    }
    else{
        Registeration();
    }
    
}

int main(){
    cout << "Patient Arrives \n";
    
    process();

    cout << "Patient Leaves \n";

    
}