#include <iostream>
#include <string>
using namespace std;


void securityScreenings() {
    // Restrict product
    if (askYesNo("Carrying RESTRICTED articles above permit?")) {
        cout << " Give up which are above permit.\n";
    } else {
        cout << " No restricted articles.\n";
    }

    // Metal 
    if (askYesNo("Metal detected by scanner?")) {
        cout << " Perform HAND SEARCH.\n";
        // Dangerous goods
    if (askYesNo("Carrying DANGEROUS goods?")) {
        cout << " Give up dangerous goods.\n";
    } else {
        cout << " No dangerous goods.\n";
    }
    } else {
        cout << " Metal not detected.\n";
    }

   
}
int main() {

    cout << " check_in completed.\n";
    cout << " Baggage dropped.\n";

    securityScreenings();

    migrationDeparture();

    bool hasConnection = false;
    do {
        boardFlight();
        flightDeparts();
        flightLands();
        hasConnection = askYesNo("Do you have a CONNECTING flight?");
        if (hasConnection) {
            cout << "\n>>> Connection detected — proceed through SECURITY again for the next leg.\n";
            securityScreenings();         
        } else {
            leaveFlight();                
        }
    } while (hasConnection);

    permitProcessP();
    immigrationArrival();

    if (permitToEnterCountry()) {
        claimBaggage();
        cout << "\n Process complete. \n";
    } else {
        sentBackToOrigin();
        
    }

    return 0;
}