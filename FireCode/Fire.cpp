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

}


void smokedetector(){
    cout << "The smoke Detector detects the fire in the building" << endl;
    cout << "The smoke detector triggers alarm" << endl;

    process();
}


void firstmove(){
   cout << "Is the fire in the building.? (y or n)" << endl;
    
   char ch;
   cin >> ch;

   if(!isFormat(ch)){
       cout << "Enter the proper intput y or n" << endl; 
   }

}



int main(){
    cout << "How the fire is seen ?" << endl;
    cout << "Choose 1 : You see the smoke ?" << endl;
    cout << "Choose 2 : Someone saw the smoke?" << endl;
    cout << "Choose 3 : smoke detector detects" << endl;

    int choice;
    cin >> choice;

    switch(choice){
        
        case 1: 
            firstmove();
             break;

        case 2: 
            firstmove();
             break;

        case 3:
            smokedetector();
            break;
            
        default:
            cout << "No such option exists." << endl;
            break;
    }
}