#include <iostream>
#include <string>
using namespace std;

string toLowercase(string str){
   for(char &ch : str){
      ch = tolower(ch);
   }

   cout << str;

   return str;
}

int main(){
    string israining;
    cin >> israining;
    getline(cin, israining);

    string lower = toLowercase(israining);
    cout << lower;


    
    
}