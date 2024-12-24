/*
Constructor: It is a special method which gets invoked automatically when the object is created.

syntax:
    className(Parameter/s) {
        //body
    }

types of constructors:
    1) Default constructor (No Parameterized)
    2) Parameterized Constructor
    3) Copy Constructor
*/

#include<iostream>
using namespace std;

class FoodItem {
    string name;
    string desc;
    string cuisine;
    double price;

public:
    FoodItem() {
        cout << "Default Constructor Called!" << endl;
        name = "Matar Paneer";
        desc = "A traditional way of making curry with peas and cottage cheese";
        cuisine = "Punjabi";
        price = 230;
    }

    FoodItem(string name, string desc, string cuisine, double price) {
        cout << "Parameterized Constructor Called!" << endl;
        this->name = name;
        this->desc = desc;
        this->cuisine = cuisine;
        this->price = price;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Description: " << desc << endl;
        cout << "Cuisine: " << cuisine << endl;
        cout << "Price: " << price << endl;
    }
};


int main() {
    FoodItem obj, obj1("Tacos", "Tacos!", "Mexican", 780);

    obj.getDetails();
    cout << "---------------------------------------------------" << endl;
    obj1.getDetails();
    cout << "---------------------------------------------------" << endl;
    
    return 0;
}