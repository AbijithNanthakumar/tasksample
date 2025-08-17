#include <iostream>
#include <string>
using namespace std;

void inputProcess(string &senderAcc, string &receiverAcc, double &amount) {
    cout << "Insert Bank Card to Machine\n";

    string bankAcc;
    cout << "Enter Bank Account Number: ";
    cin >> bankAcc;

    cout << "Enter Receiver Account Number: ";
    cin >> receiverAcc;

    cout << "Cheque inserted into machine\n";

    cout << "Enter Amount: \n";
    cin >> amount;

    cout << "Enter Sender Account Number: \n";
    cin >> senderAcc;

}

void transactionProcess(const string &senderAcc, const string &receiverAcc, double amount) {
    cout << "\n verification  progress (7 days)...\n";

    char reviewChoice;
    cout << "Sender Review Completed? (y/n): ";
    cin >> reviewChoice;
    if(reviewChoice != 'y' && reviewChoice != 'Y') {
        cout << "Invalid Transaction. Please try again later.\n";
        return;
    }

    char authChoice;
    cout << "Sender Authorized Transaction? (y/n): ";
    cin >> authChoice;
    if(authChoice == 'y' || authChoice == 'Y') {
        cout << "\nMoney Transferred Successfully!\n";
        cout << "Receiver: " << receiverAcc << ", Amount: " << amount << endl;
    } else {
        cout << "Invalid Transaction. Please try again later.\n";
    }
}
int main(){
 
     string senderAcc, receiverAcc;
     double amount = 0.0;

    inputProcess(senderAcc, receiverAcc, amount);
    transactionProcess(senderAcc, receiverAcc, amount);

    return 0;

   

}