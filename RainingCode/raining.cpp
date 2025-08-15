#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string toLowercase(string str){
   for(char &ch : str){
      ch = tolower(ch);
   }
   return str;
}

void checkUmberlla(){
    int count = 0;
    bool isfound = false;
      string isumberllafound;
    while(count <= 1000){
      cout << "Is umberlla found";
      getline(cin,isumberllafound);

      if(toLowercase(isumberllafound) == "yes" || toLowercase(isumberllafound) == "y")
      {
         bringUmberlla(); 
         isfound = true;
         break;
      }
      else{
         count++;
      }
    }
  if(isfound == false){
     cout << "Umberlla Not found";
  }
    
}

void bringUmberlla(){
    cout << "Bring Umberlla";
}

int main(){
    string israining;
    getline(cin, israining);

    string lower = toLowercase(israining);
    
    if(lower == "yes" || lower == "y"){
        checkUmberlla();
    }
    else{
       cout << "There is no rain, don't bring umberlla";
       return 0;
    }

    
    
}

