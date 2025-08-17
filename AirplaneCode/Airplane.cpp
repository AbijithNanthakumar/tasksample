#include <iostream>
#include <string>
#include <limits>
using namespace std;

bool askYesNo(const string& q) {
    while (true) {
        cout << q << " (yes=1 / no=0): ";
        int x; 
        if (cin >> x && (x==0 || x==1)) { 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            return x==1;
         }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    }
}

void securityScreenings() {
    if (askYesNo("Carrying Restricted articles above permit?")) {
        cout << " Give up which are above permit.\n";
    } else {
        cout << " No restricted articles.\n";
    }

    if (askYesNo("Metal detected by scanner?")) {
        cout << " Perform hand searching.\n";
        if (askYesNo("Is there any DANGEROUS goods?")) {
        cout << " Give up dangerous goods.\n";
         } else {
             cout << " No dangerous goods.\n";
         }
    } else {
        cout << " Metal not detected.\n";
    }

   
}

bool permitToEnterCountry(){
     return askYesNo("Permit to enter the country granted?");
 }

void Immigration(){ 
    cout << " Immigiration at departure cleared.\n";
 }
int main() {

    cout << " check_in completed.\n";
    cout << " Baggage dropped.\n";

    securityScreenings();

     
    Immigration();

    bool hasConnection = false;
    do {
        cout << " Board Flight.\n"; 
        cout << " Flight Departed.\n";
        cout << "Flight Landed Successfully.\n";
        hasConnection = askYesNo("Do you have a connecting flight?");
        if (hasConnection) {
            cout << " Connection detected — proceed through Security again for the next leg.\n";
            securityScreenings();        
        } else {
           cout << "Leave the Aircraft.\n";               
        }
    } while (hasConnection);

    cout << "Country Permit Chck \n";
    cout << "Immigiration at arrival in progress...\n";

    if (permitToEnterCountry()) {
        cout << "Claim the baggage.\n";
        
    } else {
        cout << " Entry not approved. Passenger is sent back to originating country.\n";
        
    }
    
    return 0;
}