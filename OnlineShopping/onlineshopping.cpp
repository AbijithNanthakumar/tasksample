#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Item {
    string name;
    bool inWarehouse;
};

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
   
}



