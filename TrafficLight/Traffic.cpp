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

void Directions(){
    cout << "Look Left";
    string okleft;
    cin >> okleft;

       if (!isformat(okleft))
        {
            cout << "Enter the proper input y or n";
        }
        else if (toLowercase(okleft) == "yes" || toLowercase(okleft) == "y")
        {
            Directions();
        }
        else{
            cout << "Look right";
        }

}

void Color(){
    cout << "what is the color";
         string color;
         cin >> color;

        if (!isformat(color))
        {
            cout << "Enter the proper input y or n";
        }
        else if (toLowercase(color) == "red" || toLowercase(color) == "r")
        {
            Directions();
        }
        else
        {
           this_thread::sleep_for(chrono::seconds(3)); 
           Color();
        }
}
void TrafficLight(){
    string trafficlight;
    cout << "Is traffic light present ?";
    cin >> trafficlight;

    if(!isformat(trafficlight)){
        cout << "Enter proper input y or n";
    }
    else if(toLowercase(trafficlight)=="yes" ||  toLowercase(trafficlight)=="y"){
         Color();
    }
    else{
        Directions();
    }
}
int main()
{
    while (true)
    {
        string isfootbridge;
        cout << "Is footbridge avaible ?";
        cin >> isfootbridge;

        if (!isformat(isfootbridge))
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
            string istunnel;
            cout << "Is tunnel avaible ?";
            cin >> istunnel;

            if (!isformat(istunnel))
            {
                cout << "Enter the proper input y or n";
            }
            else if (toLowercase(istunnel) == "yes" || toLowercase(istunnel) == "y")
            {
                cout << "Use Crossing";
                return 0;
            }
            else{
              
            string iscrossing;
            cout << "Is crossing avaible ?";
            cin >> iscrossing;

            if (!isformat(iscrossing))
            {
                cout << "Enter the proper input y or n";
            }
            if(toLowercase(iscrossing) == "yes" || toLowercase(iscrossing) == "y")
            {
                cout << "Use crossing";
                TrafficLight();
            }
              
            }
        }
    }
}