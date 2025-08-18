#include <iostream>
#include <string>
#include <limits>
#include <fstream>
using namespace std;


struct Students {
    string fullName;
    string department;

    bool isVerified = false;

    bool requiresVisa = false;
    bool visaSubmitted = false;

    bool tuitionPaid = false;

    bool needsHousing = false;
    string housingDetails;

    string advisor;
    bool enrolledExtra = false;
    string extraSubject;
};


string getInput(const string& message) {
    cout << message;
    
    string input;
    getline(cin, input);
    return input;
}

bool choice(const string& message) {
    while (true) {
        cout << message << " (y/n): ";
        char response;
        response = tolower(response);
        if (response == 'y') 
             return true;
        if (response == 'n')
             return false;
    }
}

void fillForm(Students& s) {
    if (s.fullName.empty()) {
         s.fullName = getInput("Enter full name: ");
    }
    if (s.department.empty()) {
         s.department = getInput("Enter the department: ");
    }
    cout << "Form submitted to the respective department.\n";

}

void VisaProcessing(Students& s) {
    s.requiresVisa = choice("Does the student need a visa?");
    if (s.requiresVisa) {
        cout << "Notify student to apply for visa.\n";
        do {
            s.visaSubmitted = choice("Has the visa been submitted?");
            if (!s.visaSubmitted) 
                cout << "Waiting for visa\n";
        } while (!s.visaSubmitted);
        cout << "Visa application received.\n";
    } else {
        cout << "Visa not required.\n";
    }
}


void PaymentProcessing(Students& s){

    do {
        s.tuitionPaid = choice("Has the tuition fee been paid?");
        if (!s.tuitionPaid) {
        cout << "Awaiting payment.";

        }
    } while (!s.tuitionPaid);
    cout << "Payment completed.\n";
}

void Accomodation(Students& s) {
    s.needsHousing = choice("Does the applicant need housing?");
    if (s.needsHousing) {
        s.housingDetails = getInput("Is Accomodatiio arrnged.\n");
        cout << "Accomodation Provided" << s.housingDetails << "\n";
    } else {
        cout << "No Accomodation.\n";
    }
}


void verification(Students& s) {
    cout << "Reviewing form for " << s.fullName << " (" << s.department << ")\n";
    do {
        cout << "Verifying...\n";
        s.isVerified = choice("Are the details correct?");
        if (!s.isVerified) {
            cout << "Please correct the form.\n";
            if (choice("Edit name?")) {
                s.fullName = getInput("New name: ");
            }
            if (choice("Edit department?")){
                s.department = getInput("New department: ");
            } 
        }
    } while (!s.isVerified);
}

int main() {
    Students stu;

    fillForm(stu);
    verification(stu);
    VisaProcessing(stu);
     PaymentProcessing(stu);
     Accomodation(stu);

    return 0;
}