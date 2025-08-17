#include<iostream>
#include<string>
using namespace std;

bool isFormat(char ch){
    if(!isalpha(ch) && !isspace(ch)){
        return false;
    }
    return true;
}


#include <iostream>
using namespace std;

// Function declaration::::::
void process();
void Inside();

int main() {
    cout << "Choose how fire is detected:\n";
    cout << "1. You see fire/smoke\n";
    cout << "2. Someone saw the fire\n";
    cout << "3. Smoke detector detects\n";
    cout << "Enter the situation 1 or 2 or 3 ";

    int choice;
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << "Are you in the building? (yes=1 / no=0): ";
        int inBuilding;
        cin >> inBuilding;

        if (inBuilding == 1) {
            cout << "Push the fire alarm!\n";
            process();
        } else {
            cout << "Contact the fire department immediately!\n";
        }
    } 
    else if (choice == 3) {
        cout << "Smoke detector triggers alarm.\n";
        process();
    }
    return 0;
}
void Inside() {
    cout << "Do not open the door.\n";
    cout << "Seal all cracks with a wet towel.\n";
    cout << "Contact the fire department.\n";
    cout << "Wave at the window to identify survivors.\n";
    cout << "Wait for rescue.\n";
}
void process() {
    
    cout << "Bring key, wallet, phone, and wet towel.\n";
    cout << "Is the door hot or smoke coming? (yes=1 / no=0) ";
    int hotDoor;
    cin >> hotDoor;

    if (hotDoor == 1) {
        Inside(); 
    } 
    else {
        cout << "Go downstairs until you leave the building.\n";
        cout << "Did you escape the building? (yes=1 / no=0): ";
        int escaped;
        cin >> escaped;

        if (escaped == 1) {
            cout << " You are safe outside!\n";
        } 
        else {
        while(true){
            cout << "Do you see fire/strong smoke? (yes=1 / no=0): ";
            int smoke;
            cin >> smoke;

            if (smoke == 1) {
                cout << "Go upstairs and head to the balcony.\n";
                cout << "Did you reach the balcony? (yes=1 / no=0): ";
                int balcony;
                cin >> balcony;

                if (balcony == 1) {
                    cout << "Wait for rescue at the balcony.\n";
                    break;
                } else {
                    cout << "Do you see fire/strong smoke? (yes=1 / no=0): ";
                    int s;
                    cin >> s;
                    if(s == 1){
                       cout << "Find and Enter a safe room \n";
                       Inside();
                    }
                    else{
                        continue;
                    }
                }
            } 
            else {
                cout << "Find a room and enter safe.\n";
            }
        } 

        }
    }
   
}
