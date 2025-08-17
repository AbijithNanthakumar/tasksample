#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isNewIssue();
void testIssue();
bool simulateIssue();
void getErrorDetails( string &desc) ;
void writeToCSV( const string &desc);
void errorAnalysis();
void solveIssue();
bool issueFixed();
void confirmIssueFixed();
void contactCustomerForInfo();
bool isSalesIssue();
void redirectSales();
bool isTechnicalIssue();
void redirectTechnical();

// Step 3: Handle enquiries
bool enquiries() {
    char ans;
    cout << "Do you have an enquiry? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

void unknownIssue() {
    if (isNewIssue()) {
        testIssue();

        if (simulateIssue()) {
            string desc;
            getErrorDetails( desc);
            writeToCSV(desc);
            errorAnalysis();
            solveIssue();
            if (issueFixed()) {
                cout << "Issue successfully resolved.\n";
            } else {
                cout << "Issue unresolved, further investigation needed.\n";
            }
        } else {
            contactCustomerForInfo();
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
        redirectSales();
    } else if (isTechnicalIssue()) {
        redirectTechnical();
    } else {
        unknownIssue();
    }
}

void confirmIssueFixed() {
    cout << "Confirming issue fixed with customer...\n";
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

void redirectSales() {
    cout << "Redirecting to Sales Support...\n";
}

void redirectTechnical() {
    cout << "Redirecting to Technical Support...\n";
}



bool isNewIssue() {
    char ans;
    cout << "Is this a new issue? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

void testIssue() {
    cout << "Testing the issue...\n";
}

bool simulateIssue() {
    char ans;
    cout << "Can you simulate the issue? (y/n): ";
    cin >> ans;
    cin.ignore();
    return (ans == 'y' || ans == 'Y');
}

void contactCustomerForInfo() {
    cout << "Contacting customer for more information...\n";
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

void errorAnalysis() {
    cout << "Performing error analysis...\n";
}

void solveIssue() {
    cout << "Solving the issue...\n";
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