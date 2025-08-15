#include <iostream>
#include <string>
using namespace std;

string toLowercase(string str){
   for(char &ch : str){
      ch = tolower(ch);
   }
   return str;
}

void chechUmberlla(){
     string isumberllaf
}

int main(){
    string israining;
    getline(cin, israining);

    string lower = toLowercase(israining);
    
    if(lower == "yes"){
        chechUmberlla();
    }
    else{
       cout << "There is no rain, don't bring umberlla";
       return 0;
    }

    
    
}

