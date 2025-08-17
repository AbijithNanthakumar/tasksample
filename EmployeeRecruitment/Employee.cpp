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
   cout << "Develop recruitment plan";
   cout << "place advertisements";
   cout << "Collect Application";
}

void Notselected(){
   cout << "Candidate Not hired"
}

void Selection(){
   cout << "Select Candidate.\n";
   cout << "Evaluate pay rate.\n";
   cout << "Send Employement offer letter.\n";
}

void process()
{
    cout << "Send crew to request to HR.\n";
    cout << "Determine classification";

    cout << "Is this a regular hiring process.(y or n)\n";
    char ch;
    cin >> ch;

    if (tolower(ch) == 'y')
    {
        cout << "Post job internally";
    }
    else
    {
        cout << "special Hiring Process";
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
            cout << "Is he qualified?";
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

        if(ref){
            Selection();
        }
        else{
            Notselected();
            return 0;
        }

        cout << "Accepted Offer";
        char offer;
        cin >> offer;

        if(offer){
            cout << "Congratulations You are hired";
            return 0;
        }
        else{
            Notselected();
        }
}