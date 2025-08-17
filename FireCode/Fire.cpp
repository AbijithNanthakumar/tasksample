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