#include <iostream>
#include <string>
#include <limits>
#include <fstream>
using namespace std;


struct Students {
    string fullName;
    string department;

    bool isVerified = false;

    bool Visa = false;
    bool visaSubmition = false;

    bool tuitionfee = false;

    bool Accomodation = false;
    string AccDetails;

    string tutor;
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
    s.Visa = choice("Does the student need a visa?");
    if (s.Visa) {
        cout << "Notify student to apply for visa.\n";
        do {
            s.visaSubmition = choice("Has the visa been submitted?");
            if (!s.visaSubmition) 
                cout << "Waiting for visa\n";
        } while (!s.visaSubmition);
        cout << "Visa application received.\n";
    } else {
        cout << "Visa not required.\n";
    }
}


void PaymentProcessing(Students& s){

    do {
        s.tuitionfee = choice("Has the tuition fee been paid?");
        if (!s.tuitionfee) {
        cout << "Awaiting payment.";

        }
    } while (!s.tuitionfee);
    cout << "Payment completed.\n";
}

void Accomodation(Students& s) {
    s.Accomodation = choice("Does the applicant need housing?");
    if (s.Accomodation) {
        s.AccDetails = getInput("Is Accomodatiio arrnged.\n");
        cout << "Accomodation Provided" << s.AccDetails << "\n";
    } else {
        cout << "No Accomodation.\n";
    }
}

void tutor(Students& s) {
    if (s.tutor.empty())
        s.tutor = getInput("Enter advisor name: ");
    cout << "Advisor assigned: " << s.tutor << "\n";
}

void AdditionalCourse(Students& s) {
    s.enrolledExtra = choice("Is the applicant taking extra credits?");
    if (s.enrolledExtra) {
        s.extraSubject = getInput("Enter extra course name: ");
        cout << "Extra course enrolled: " << s.extraSubject << "\n";
    } else {
        cout << "No extra course selected.\n";
    }
}

void saveToFile( Students& s) {
    bool addHeader = false;

    ifstream file("applicants.csv");
    

    ofstream dbFile("applicants.csv", ios::app);
    if (!dbFile) {
        cerr << "Error opening database file!\n";
        return;
    }

  
    dbFile << "FullName,Department,Verified,Visa,TuitionPaid,Housing,Advisor,ExtraCourse\n";
    

    dbFile << s.fullName << ","
           << s.department << ","
           << (s.isVerified ? "Yes" : "No") << ","
           << (s.Visa ? (s.visaSubmition ? "Submitted" : "Required") : "Not required") << ","
           << (s.tuitionfee ? "Yes" : "No") << ","
           << (s.Accomodation ? s.AccDetails : "Not requested") << ","
           << (s.tutor.empty() ? "Not assigned" : s.tutor) << ","
           << (s.enrolledExtra ? s.extraSubject : "None") << "\n";

    dbFile.close();
    cout << "Applicant data saved to applicants.csv\n";
}


void verification(Students& s) {
    cout << "Reviewing form for " << s.fullName << " (" << s.department << ")\n";
   do {
        cout << "Checking details...\n";
        s.isVerified = choice("Are details verified?");
        if (!s.isVerified) {
            cout << "Return form for correction. Please correct details\n";
            if (choice("Edit name?")) {
                   s.fullName    = getInput("New name: ");
            }   
            if (choice("Edit program?")) {
                    s.department = getInput("New program: ");
                    continue;
            }
        }
    } while (!s.isVerified);
    cout << "Verified\n";
}


int main() {
    Students stu;

    fillForm(stu);
    verification(stu);
    VisaProcessing(stu);
     PaymentProcessing(stu);
     Accomodation(stu);
     tutor(stu);
     AdditionalCourse(stu);
     saveToFile(stu);

    return 0;
}