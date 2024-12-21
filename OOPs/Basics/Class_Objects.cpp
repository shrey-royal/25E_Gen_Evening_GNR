#include<iostream>
using namespace std;

class Chocolate {
private:    //by default private
    string name;
    string flavor;
    double price;
    int quantity;

public:
    void scanChocolateDetails() {
        cout << "Enter chocolate name: ";
        cin >> name;
        cout << "Enter chocolate flavor: ";
        cin >> flavor;
        cout << "Enter chocolate price: ";
        cin >> price;
        cout << "Enter chocolate quantity: ";
        cin >> quantity;
    }
    
    void printChocolateDetails() {
        cout << "Name: " << name << endl;
        cout << "Flavor: " << flavor << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};


int main() {
    Chocolate c;

    c.scanChocolateDetails();
    c.printChocolateDetails();

    return 0;
}