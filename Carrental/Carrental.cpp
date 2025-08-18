#include <iostream>
#include <string>
#include <limits>
#include <fstream>
using namespace std;


string getInput(const string& message) {
    cout << message;
    
    string input;
    getline(cin, input);
    return input;
}


void admin() {
    cout << "\n Admin Login \n";
    string password, correct = "111";

    bool loggedIn = false;
    do {
        cout << "Admin password please: ";
        cin >> password;
        if (password == correct) {
            cout << "Login successful\n";
            loggedIn = true;
        } else {
            cout << "Login failed\n";
        }
    } while (!loggedIn);

    ChooseApplication(); 
}



int main() {
    cout << "Car Rental System \n";
    cout << "User type? (1=Admin, 2=Registered User, 3=New User): ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: admin(); break;          
        case 2: registeredusers(); break; 
        case 3: newuser(); break;        
        default: cout << "Invalid choice\n";
    }
    return 0;
}