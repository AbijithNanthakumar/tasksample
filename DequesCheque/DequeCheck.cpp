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

    cout << "Enter Cheque Amount: ";
    cin >> amount;

    cout << "Enter Sender Account Number: ";
    cin >> senderAcc;

    cout << "\n--- Review Details ---\n";
    cout << "Sender Account   : " << senderAcc << endl;
    cout << "Receiver Account : " << receiverAcc << endl;
    cout << "Amount           : " << amount << endl;
}


int main(){
 
     string senderAcc, receiverAcc;
    double amount = 0.0;

    inputProcess(senderAcc, receiverAcc, amount);


    cout << "\n--- End of Process ---\n";
    return 0;

   

}