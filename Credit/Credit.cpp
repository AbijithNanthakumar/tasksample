#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void endProcess(const string &cardNumber, const string &status)
{
    cout << "Transaction Status: " << status << endl;
    cout << "Statement will be given.\n";

    ofstream file("statements.csv", ios::app);
    if (file.is_open())
    {
        file << cardNumber << "," << status << "\n";
        file.close();
    }
}

bool Verificationprocess()
{

    while (true)
    {
        char cardValid;
        cout << "Is Card Valid? (y/n): ";
        cin >> cardValid;
        if (cardValid != 'y')
        {
            cout << "Card Invalid. Transaction Failed.\n";
            continue;
        }

        char funds;
        cout << "Are Funds Available? (y/n): ";
        cin >> funds;
        if (funds != 'y' && funds != 'Y')
        {
            cout << "Insufficient Funds. Transaction Failed.\n";
            continue;
        }

        char bankVerify;
        cout << "Payment Verified by Bank? (y/n): ";
        cin >> bankVerify;
        if (bankVerify != 'y' && bankVerify != 'Y')
        {
            cout << "Bank Rejected Transaction.\n";
            continue;
        }

        char accValid;
        cout << "Is Account Valid? (y/n): ";
        cin >> accValid;
        if (accValid != 'y' && accValid != 'Y')
        {
            cout << "Account Invalid. Transaction Failed.\n";
            continue;
        }

        return true;
    }
}



int main()
{
    cout << "Order placed By the client \n";
    string Cardnumber;
    cin >> Cardnumber;
    Verificationprocess();

    if (Verificationprocess())
    {
        endProcess(Cardnumber, "SUCCESS");
    }
    else
    {
        endProcess(Cardnumber, "FAILED");
    }
}