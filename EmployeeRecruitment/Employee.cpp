#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void Interview(){
    cout << "Arrange Candidate meeting. \n";
    cout << "Conducting pre-interview.\n";
    cout << "Set Up interview questions.\n";
    cout << "Conduct Interview.\n";
}

void Recruitment(){
   cout << "Develop recruitment plan.\n";
   cout << "place advertisements.\n";
   cout << "Collect Application.\n";
}

void Notselected(){
   cout << "Candidate Not hired.\n";
}

void Selection(){
   cout << "Select Candidate.\n";
   cout << "Evaluate pay rate.\n";
   cout << "Send Employement offer letter.\n";
}

void process()
{
    cout << "Send crew to request to HR.\n";
    cout << "Determine classification.\n";

    cout << "Is this a regular hiring process.(y or n)\n";
    char ch;
    cin >> ch;

    if (tolower(ch) == 'y')
    {
        cout << "Post job internally.\n";
    }
    else
    {
        cout << "special Hiring Process.\n";
    }
}
int main()
{
    cout << "Define Job Description (Action Process).\n";

    process();

    cout << "Is this a suitale candidate?.\n";
    char ch;
    cin >> ch;

    if (ch == 'y')
    {
        Interview();
    }
    else
    {
        cout << "Review existing resume on the file.\n";
        cout << "Is this a suitale candidate?.\n";
        char ch;
        cin >> ch;

        if (ch == 'y')
        {
            Interview();
        }
        else
        {
            Recruitment();
            cout << "Is he qualified?.\n";
            char qualify;
            cin >> qualify;

            if(tolower(qualify)){
                Interview();
            }
            else{
                Notselected();
                return 0;
            }
        }
    }

    
        cout << "Have a Good Reference?.\n";
        char ref;
        cin >> ref;

        if(tolower(ref)=='y'){
            Selection();
        }
        else{
            Notselected();
            return 0;
        }

        cout << "Accepted Offer.\n";
        char offer;
        cin >> offer;

        if(tolower(offer)=='y'){
            cout << "Congratulations You are hired.\n";
            return 0;
        }
        else{
            Notselected();
        }
}