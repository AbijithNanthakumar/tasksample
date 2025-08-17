#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void process(){
    cout << "Send crew to request to HR.\n";
    cout << "Determine classification";
     
    cout << "Is this a regular hiring process.(y or n)\n";
    char ch;
    cin >> ch;

    if(tolower(ch)=='y'){
        cout << "Post job internally";
    }else{
        cout << "special Hiring Process";
    }

}
int main(){
    cout << "Define Job Description (Action Process).\n";

    process();

    cout << "Is this a suitale candidate?.\n";
    char ch;
    cin >> ch;

}
