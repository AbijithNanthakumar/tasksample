#include <iostream>
#include <fstream>
#include <string>
using namespace std;




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
}

// Step 4: Known issues handling
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

// Step 5: Routing issues
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


// Step 6: New issue processing
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

    
    

    // Step 4: New issue workflow
    

    cout << "=== System Finished ===\n";
    return 0;
}