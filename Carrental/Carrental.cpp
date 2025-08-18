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

// same code from student.cpp process
bool choice(const string& message) {
    while (true) {
        cout << message << " (y/n): ";
        char response;
        if (!(cin >> response)) { 
              cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue; 
        }
        response = tolower(response);
        if (response == 'y'){
            return true;
        } 
        if (response == 'n'){
              return false;
        }
           
    }
 
}
void login(string &password) {
    string entered;
    bool success = false;

    do {
        cout << "Enter password: ";
        cin >> entered;
        cin.ignore();
        if (entered == password) {
            cout << "Login successful\n";
            success = true;
        } else {
            cout << "Incorrect password\n";
            if (choice("Forgot password?")) {
                password = getInput("Set new password: ");
                cout << "Password reset successful\n";
            }
        }
    } while (!success);

    cout << "Looking for desired vehicle\n";
    cout << "Making payment\n";
    cout << "Logout complete\n";
}


void saveUserToCSV(const string& name, const string& email, const string& password) {
    ofstream file("users.csv", ios::app); 
    if (!file) {
        cerr << "Error opening users.csv!\n";
        return;
    }
    file << name << "," << email << "," << password << "\n";
    file.close();
    cout << "User details saved in DB (users.csv)\n";
}



void newuser() {
    cout << "\nNew User Registration \n";
    string name = getInput("Enter name: ");
    cin.ignore();
    string email = getInput("Enter email: ");
    cin.ignore();
    string pass  = getInput("Set password: ");
    cin.ignore();

    // Save user details into csv file
    saveUserToCSV(name, email, pass);

    cout << "Registration Completed for " << name << ".\n";

    cout << "Proceed to login\n";
    string storedPass = pass;
    login(storedPass);
}

void registeredusers() {
    if(choice("RegisteredUser?")){
         string pass = getInput("What is the password");
        login(pass);
    }
    else{
       newuser();
    }
}


void Chooseapplication() {
    bool loop = true;

    while (loop) {
        cout << "1. Update car library\n";
        cout << "2. Answer customer enquiries\n";
        cout << "3. Logout\n";
        cout << "Choose action: ";
        int ch;
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Car library updated successfully\n";
                break;
            case 2:
                cout << "Customer enquiries answered\n";
                break;
            case 3:
                cout << "Logging out\n";
                loop = false;
                break;
            default:
                cout << "Invalid choice\n";
        }
    }
}


void admin() {
    cout << "\n Admin Login \n";
    string password, correct = "12344";

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

    Chooseapplication(); 
}



int main() {
    cout << "Car Rental System \n";
    cout << "User type? (1=Admin, 2=Registered User): ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: admin(); break;          
        case 2: registeredusers(); break; 
       default: cout << "Invalid choice\n";
    }
    return 0;
}