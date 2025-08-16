#include <iostream>
#include <cctype>
#include <string>
#include <thread>
using namespace std;

// check
bool isformat(string str)
{
    for (char ch : str)
    {
        if (!isalpha(ch) && !isspace(ch))
        {
            return true;
        }
    }
    return true;
}

// toLowercase
string toLowercase(string str)
{
    for (char &ch : str)
    {
        ch = tolower(ch);
    }

    return str;
}

int main()
{
    while (true)
    {
        string isfootbridge;
        cout << "Is footbridge avaible ?";
        cin >> isfootbridge;

        if (!isformat)
        {
            cout << "Enter the proper input y or n";
        }
        else if (toLowercase(isfootbridge) == "yes" || toLowercase(isfootbridge) == "y")
        {
            cout << "Use footbridge";
            return 0;
        }
        else
        {
            string isfootbridge;
            cout << "Is footbridge avaible ?";
            cin >> isfootbridge;

            if (!isformat)
            {
                cout << "Enter the proper input y or n";
            }
            else if (toLowercase(isfootbridge) == "yes" || toLowercase(isfootbridge) == "y")
            {
                cout << "Use footbridge";
                return 0;
            }
        }
    }
}