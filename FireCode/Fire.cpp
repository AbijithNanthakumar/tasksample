#include<iostream>
#include<string>
using namespace std;

void firstmove(){

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
    }
}