#include <iostream>
#include <string>
using namespace std;

bool isFormat(char ch)
{
    if (!isalpha(ch) && !isspace(ch))
    {
        return false;
    }
    return true;
}

void Destination()
{

    char destination;
    cout << "Is destination reached by the passenger(y/n) \n";
    cin >> destination;
    if (!isFormat(destination))
    {
        cout << "Enter the proper input y or n \n";
        Destination();
    }
    if (tolower(destination) == 'y')
    {
        cout << "Leave the train \n";
        return;
    }
    else
    {
        Destination();
    }
}

void DiscountAvailable()
{
    bool discount;
    cout << "Is ticket discount available ---> yes(1)/ No(0) \n";
    cin >> discount;
    if (discount)
    {
        cout << "Show valid documentation \n";
    }
    else
    {
        cout << "Show valid documentation \n";
    }
    Destination();
}

void SeatLooking()
{
    cout << "Is reservation is availabe(y/n) \n";
    char reserveavailable;
    cin >> reserveavailable;
    if (!isFormat(reserveavailable))
    {
        cout << "Enter the proper input y or n \n";
        SeatLooking();
    }
    if (tolower(reserveavailable) == 'y')
    {
        cout << "Look for the assigned seat  \n";
    }
    else
    {
        cout << "Look for any unassigned seat avilable. \n";
    }

    cout << "Inspector will check  train ticket \n";
    DiscountAvailable();
}

void Ticket()
{
    cout << "Collect the ticket --> Mail(m)/ Machine(t) \n";
    char collect;
    cin >> collect;

    if (!isFormat(collect))
    {
        cout << "Enter the proper input y or n \n";
        Ticket();
    }
    if (tolower(collect) == 'm')
    {
        cout << "Check the letter box in 3 days \n";
    }
    else
    {
        cout << " Receive the ticket through ticket machine \n";
    }

    cout << "Board the train \n";
    SeatLooking();
}

void Reservation()
{
    cout << "Buy train ticket \n";
    cout << "Is seat reservation needed? y or n \n";
    char isreserve;
    cin >> isreserve;

    if (!isFormat(isreserve))
    {
        cout << "Enter the proper input y or n \n";
        Reservation();
    }
    if (tolower(isreserve) == 'y')
    {
        cout << "Select the seat \n";
    }
    else
    {
        cout << "Do you want reservation?(y/n) \n";

        cin >> isreserve;
        if (tolower(isreserve) == 'y')
        {
            cout << "Select the seat \n"
                 << endl;
        }
    }
    Ticket();
}

int main()
{
    Reservation();
}