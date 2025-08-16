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
            return false;
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
    cout << "Look Left \n";
    cout << "Is car approaching in left \n";
    string crossingleft;
    getline(cin,crossingleft);
    

       if (!isformat(crossingleft))
        {
            cout << "Enter the proper input y or n \n";
        }
       if (toLowercase(crossingleft) == "yes" || toLowercase(crossingleft) == "y")
        {

            Directions();
        }
        else{
            cout << "Look right \n";
            cout << "Is car approaching in right \n";
            string crossright;
                getline(cin,crossright);


        if (!isformat(crossright))
        {
            cout << "Enter the proper input y or n \n";
        }
        if (toLowercase(crossright) == "yes" || toLowercase(crossright) == "y")
        {
            Directions();
        }
        
        }

}

void Color(){
    cout << "what is the color \n";
         string color;
             getline(cin,color);


        
         if (toLowercase(color) == "red" || toLowercase(color) == "r")
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
    cout << "Is traffic light present ? \n";
     getline(cin,trafficlight);


    if(!isformat(trafficlight)){
        cout << "Enter proper input y or n \n";
    }
     if(toLowercase(trafficlight)=="yes" ||  toLowercase(trafficlight)=="y"){
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
        cout << "Is footbridge avaible ? \n";
           getline(cin,isfootbridge);


        if (!isformat(isfootbridge))
        {
            cout << "Enter the proper input y or n \n";
            continue;
        }
         if (toLowercase(isfootbridge) == "yes" || toLowercase(isfootbridge) == "y")
        {
            cout << "Use footbridge \n";
            return 0;
        }
        else
        {
            while(true){
               string istunnel;
            cout << "Is tunnel avaible ? \n";
                getline(cin,istunnel);


            if (!isformat(istunnel))
            {
                cout << "Enter the proper input y or n \n";
                continue;
            }
             if (toLowercase(istunnel) == "yes" || toLowercase(istunnel) == "y")
            {
                cout << "Use Tunnel \n";
                return 0;
            }
            else{
              
            string iscrossing;
            cout << "Is crossing avaible ? \n";
                getline(cin,iscrossing);


            if (!isformat(iscrossing))
            {
                cout << "Enter the proper input y or n \n";
            }
            if(toLowercase(iscrossing) == "yes" || toLowercase(iscrossing) == "y")
            {
                cout << "Use crossing \n";
                TrafficLight();

                cout << "Cross Traffic \n";
                return 1;
            }
              
            }
            }
            
        }
        
    }
}