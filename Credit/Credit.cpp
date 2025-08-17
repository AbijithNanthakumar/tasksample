#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool Verificationprocess() {
    char cardValid;
    cout << "Is Card Valid? (y/n): ";
    cin >> cardValid;
    if(cardValid != 'y' && cardValid != 'Y') {
        cout << "Card Invalid. Transaction Failed.\n";
        return false;
    }

    char funds;
    cout << "Are Funds Available? (y/n): ";
    cin >> funds;
    if(funds != 'y' && funds != 'Y') {
        cout << "Insufficient Funds. Transaction Failed.\n";
        return false;
    }

    char bankVerify;
    cout << "Payment Verified by Bank? (y/n): ";
    cin >> bankVerify;
    if(bankVerify != 'y' && bankVerify != 'Y') {
        cout << "Bank Rejected Transaction.\n";
        return false;
    }

    char accValid;
    cout << "Is Account Valid? (y/n): ";
    cin >> accValid;
    if(accValid != 'y' && accValid != 'Y') {
        cout << "Account Invalid. Transaction Failed.\n";
        return false;
    }

    cout << "Verification Successful.\n";
    return true;
}

int main(){
    cout << "Order placed By the client \n";

    Verificationprocess();
}