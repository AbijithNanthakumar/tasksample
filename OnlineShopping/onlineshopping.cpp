#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Item {
    string name;
    bool inWarehouse;
};
void warehousetocustomer(){
    cout << "Sending goods from warehouse to the customer \n";
    cout << "Customer recieved the product \n";
}
void sellershipping(){
    cout << "Seller shipped the item to the customer \n";
}

void contactseller(const string &name){
    cout << "Contacting seller to ship" << name << "to customer \n";
}

void Warehousepacking(const string &name){
     cout << name << "packed with other ordders \n";
}


void processing(vector<Item>& items){
     for(const auto& item :items){
         if(item.inWarehouse){
             Warehousepacking(item.name);
         }
         else{
            contactseller(item.name);
            sellershipping();
         }
     }
}


void Order(vector<Item>& items) {
    cout << "There are" << items.size() << " items ordered.\n";
}

int main() {
    vector<Item> items = {
        {"Sketcbook", true},
        {"pencil", true},
        {"stensil", false},
        {"tablet", true}
    };

    Order(items);
    processing(items);
    warehousetocustomer();

    cout << "Completed \n";
   
}



