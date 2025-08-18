#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;


string name,location;

void Asssign(string &taxiName, string &range)
{
    cout<<"\nAssign passenger.\n";
    cout<<"\nPassenger named "<<name<<" is assigned to the driver of "<<taxiName<<endl;
    fstream taxi("available.csv", ios::in | ios::out | ios::app);
    fstream order("history.csv",ios::in | ios::out | ios::app);
    cout<<"\nTaxi ride over, update in the database\n";
    taxi<<taxiName<<","<<range<<endl;
    order<<name<<","<<taxiName<<endl;
    taxi.close();
    order.close();
}


void PickUp(){
    fstream pickup("incoming.csv", ios::in | ios::out | ios::app);
    string pick;
    do{
        cout<<"\nName of the customer: \n";
        cin>>name;
        cout<<"\nLocation of the customer: \n";
        cin>>location;
        cout<<"\nTime to pickup would be 30mins or less?(yes/no)\n";
        cin>>pick;
        if(pick=="no")
        {
            cout<<"\nWait for the next \n";
        }
    }while(pick!="yes");
    pickup<<name<<","<<location<<","<<endl;
    cout<<"\nOrder is within the time range\n";
    pickup.close();


    // taxi process::::::
    fstream taxi("avaitaxi.csv", ios::in | ios::out | ios::app);
    ofstream dummy("dummyfile.csv");
    cout<<"\nFind taxi within the 10km range\n";
    int km;
    string line,tname,ran;
    bool tFound=false;
    pair<string,string> getTaxi={"",""};
    cout<<"\nTaxi within 10kms range?\n";
    while(getline(taxi,line))
    {
        // storing from csv to variable:::::?
        stringstream ss(line);
        getline(ss, tname, ',');
        getline(ss,ran);
        km=stoi(ran); // stoi ---> string to integer.
 
        if(!tFound && km<=10)
        {
            cout<<"\nTaxi named "<<tname<<" is within "<<ran<<"km range\n";
            tFound=true;
            getTaxi={tname,ran};
            continue;
        }
        dummy<<tname<<","<<ran<<endl;
    }
    taxi.close();
    dummy.close();
    remove("avaitaxi.csv");
    rename("dummytaxi.csv","avaitaxi.csv");
    if(!tFound)
    {
        cout<<"\nKindly wait\n";
        
    }
    string taxiName=getTaxi.first;
    string range=getTaxi.second;
    Asssign(taxiName,range);
}
void OrderMaking(){
    cout << "Choose Mode.\n";
    string choose;
    cin >> choose;

    if(choose == "phone"){
        cout << "Customer makes order by phone.\n";
        cout << "Call center sends order to server.\n";
    }
    else{
        cout << "Order software.\n";
        cout << "Sodtware sends information to server.\n";
    }
}

int main(){
     OrderMaking();
     PickUp();
}