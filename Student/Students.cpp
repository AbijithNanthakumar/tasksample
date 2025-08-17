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
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string input;
    getline(cin, input);
    return input;
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

int main() {
    Students stu;

    fillForm(stu);

    return 0;
}