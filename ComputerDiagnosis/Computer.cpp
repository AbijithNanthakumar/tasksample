#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void check();
void Powerprocess();

bool isFormat(string str)
{
    for (char ch : str)
    {
        if (!isalpha(ch) && !isspace(ch))
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

void ErrorProcess()
{
    cout << "Is the any error message displayed? \n";
    string iserr;
    cin >> iserr;

    if (!isFormat(iserr))
    {
        cout << "Enter the proper input y or n. \n";
        ErrorProcess();
    }
    if (toLowercase(iserr) == "yes" || toLowercase(iserr) == "y")
    {
        cout << "Perform Diagnosis for the computer. \n";
        check();
    }
    else
    {
        cout << "Computer is in good condition. \n";
        return;
    }
}

void Plugged(){
     cout << "Is the power plugged to the wall?. \n";
    string isplugged;
    cin >> isplugged;
        if (!isFormat(isplugged))
        {
            cout << "Enter the proper input y or n. \n";
            Powerprocess();
        }
        if (toLowercase(isplugged) == "yes" || toLowercase(isplugged) == "y")
        {
            cout << "Find a specialist to repair. \n";
            return;
        }
        else
        {
            cout << "Plug power to the wall. \n";
            check();
        }
}

void Powerprocess()
{
    cout << "Is the power light on.? \n";
    string ispower;
    cin >> ispower;

    if (!isFormat(ispower))
    {
        cout << "Enter the proper input y or n. \n";
        Powerprocess();
    }
    if (toLowercase(ispower) == "yes" || toLowercase(ispower) == "y")
    {
        cout << "Find a specialist to repair. \n";
        return;
    }
    else
    {
        Plugged();
        
    }
}

void check()
{
    cout << "Is computer on? \n";
    string ison;
    cin >> ison;

    if (!isFormat(ison))
    {
        cout << "Enter the proper input y or n. \n";
        check();
    }
    if (toLowercase(ison) == "yes" || toLowercase(ison) == "y")
    {
        ErrorProcess();
    }
    else
    {
        Powerprocess();
    }
}

int main()
{
    check();
}
