#include <iostream>
#include <cctype>
#include <string>
#include <thread>
using namespace std;

void PriorityBoard();

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

void Announcement(){
    cout << " Board withn 5 minutes \n";
    string isarrived;
    getline(cin, isarrived);

    if(!isFormat(isarrived)){
        cout << "Enter the proper input y or n \n";
    
    }
    if(toLowercase(isarrived)=="yes" || toLowercase(isarrived)=="y"){
        cout << "All passengers arrived.Closing Gate \n";
        return;
    }
    else{
       cout << "Passengers are requested to onboard. \n";
        this_thread::sleep_for(chrono::minutes(5));
        cout << "Closing gate \n";
        return;
    }



}

void Halfclass(){
    cout << "Is this Half 1st class?.\n";
    string isHalffirstclass;
    getline(cin, isHalffirstclass);

    if(!isFormat(isHalffirstclass)){
        cout << "Enter the proper input y or n \n";
        Halfclass();
    }
    if(toLowercase(isHalffirstclass)=="yes" || toLowercase(isHalffirstclass)=="y"){
        cout << "All Passengers Board Plane \n";
         Announcement();
    }
    else{
     PriorityBoard();
    }
}


void PriorityBoard(){
    cout << "Starting priority boarding. \n";
    cout << "Is this first class?.\n";
    string isfirstclass;
    getline(cin, isfirstclass);

    if(!isFormat(isfirstclass)){
        cout << "Enter the proper input y or n \n";
        PriorityBoard();
    }
    if(toLowercase(isfirstclass)=="yes" || toLowercase(isfirstclass)=="y"){
        cout << "Board Plane \n";
         Announcement();
    }
    else{
       Halfclass();
    }
     
    
    
}


int main(){
    cout << "The Plana Arived the gate. \n";

    PriorityBoard();
}