#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isNewIssue();
bool simulateIssue();
void getErrorDetails( string &desc) ;
void writeToCSV( const string &desc);
bool issueFixed();
void confirmIssueFixed();
bool isSalesIssue();
bool isTechnicalIssue();



bool enquiries() {
    char ans;
    cout << "Do you have an enquiry? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

void unknownIssue() {
    if (isNewIssue()) {
       cout << "Testing the issue...\n";

        if (simulateIssue()) {
            string desc;
            getErrorDetails( desc);
            writeToCSV(desc);
            cout << "Performing error analysis...\n";
            cout << "Solving the issue...\n";
            if (issueFixed()) {
                cout << "Issue successfully resolved.\n";
            } else {
                cout << "Issue unresolved, further investigation needed.\n";
            }
        } else {
            cout << "Contacting customer for more information...\n";
        }
    } else {
        cout << "Resolving Unknown issue...\n";
    }
}


void feedback() {
     cout << "Collecting feedback from customer...\n";
    char survey;
    cin >> survey;
    
    if(tolower(survey)=='y'){
        cout << "Survey from the customer successfull";
    }
   
}


void knownIssues() {
    if (isSalesIssue()) {
          cout << "Redirecting to Sales Support...\n";
    } else if (isTechnicalIssue()) {
        cout << "Redirecting to Technical Support...\n";
    } else {
        unknownIssue();
    }
}

void confirmIssueFixed() {
    cout << "Confirming issue fixed with customer...\n";
    feedback();
}

bool isSalesIssue() {
    char ans;
    cout << "Is this a sales issue? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

bool isTechnicalIssue() {
    char ans;
    cout << "Is this a technical issue? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}


bool isNewIssue() {
    char ans;
    cout << "Is this a new issue? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}



bool simulateIssue() {
    char ans;
    cout << "Can you simulate the issue? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

void getErrorDetails( string &desc) {
    
    cout << "Enter Error Description: ";
    getline(cin, desc);
}

// csv writting
void writeToCSV( const string &desc) {
    ofstream file("error.csv", ios::app);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    file  << desc << "\n";
    file.close();
    cout << " Error details saved to error.csv\n";
}



bool issueFixed() {
    char ans;
    cout << "Is the issue fixed? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

int main() {

     cout << "Customer has found an issue.\n";
     cout << "Customer contacted services.\n"; 

    if (enquiries()) {
        cout << "Answering customer's questions...\n";
        feedback();
    } else {
        knownIssues();
        confirmIssueFixed();
    }

    return 0;
}