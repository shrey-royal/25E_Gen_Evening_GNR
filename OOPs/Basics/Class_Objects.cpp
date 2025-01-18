#include<iostream>
using namespace std;

class FoodItem {
public:
    string name;
    double price;

    void toString() {
        cout << "Name: " << name << ", Price: Rs." << price << endl;
    }
};

int main() {
    // FoodItem cookie;
    // cookie.name = "ChocoChip Cookie";
    // cookie.price = 130;
    // cookie.toString();

    // FoodItem cake;
    // cake.name = "Red velvet CheeseCake";
    // cake.price = 890;
    // cake.toString();

    FoodItem cookies[2];

    cookies[0].name = "Chocochip Cookie";
    cookies[0].price = 120;
    
    cookies[1].name = "Blueberry Delight";
    cookies[1].price = 180;

    for(FoodItem cookie : cookies) {
        cookie.toString();
    }

    // int a[] = {32, 23, 5, 12, 1, 244, 56, 2};
    // for(int i : a) {
    //     cout << i << ", ";
    // }


    return 0;
}

/*
Task: Make 3 classes with atleast 3 attributes each, make array of object and the size must be 2. use toString() method to print the object use foreach loop.
*/