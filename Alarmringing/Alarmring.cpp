#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isfomat(string str)
{
    for (char ch : str)
    {
        if (!isalpha(ch) && !isalpha(ch))
        {
            return false;
        }
    }
    return true;
}

string toLowercase(string str)
{
    for (char &ch : str)
    {
        ch = tolower(ch);
    }

    return str;
}

void statement()
{
    cout << "Leave the bed \n";
    cout << "Turn Off the Alarm \n";
}

void snooze()
{
    
}

int main()
{

    while (true)
    {
        cout << "....Alarm Ringing.... \n";

        cout << "Are you ready to wake up? \n";
        string isready;
        cin >> isready;

        if (!isfomat(isready))
        {
            cout << "Enter the proper input y or n \n";
        }
        else if (toLowercase(isready) == "yes" || toLowercase(isready) == "y")
        {
            statement();
            return 0;
        }
        else
        {
            string islate;
            cout << "Will you be late? \n";
            cin >> islate;

            if (!isfomat(islate))
            {
                cout << "Enter the proper input y or n \n";
            }
            else if (toLowercase(islate) == "yes" || toLowercase(islate) == "y")
            {
                statement();
                return 0;
            }
            else
            {
                snooze();
            }
        }
    }
}