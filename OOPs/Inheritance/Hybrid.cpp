#include <iostream>
using namespace std;

// Base Class: Food
class Food {
public:
    void category() {
        cout << "This is a type of food." << endl;
    }
};

// Intermediate Class: Fruit (Single Inheritance from Food)
class Fruit : public Food {
public:
    void type() {
        cout << "This is a type of fruit." << endl;
    }
};

// Intermediate Class: Vegetable (Single Inheritance from Food)
class Vegetable : public Food {
public:
    void type() {
        cout << "This is a type of vegetable." << endl;
    }
};

// Derived Class: Salad (Multiple Inheritance from Fruit and Vegetable)
class Salad : public Fruit, public Vegetable {
public:
    void dish() {
        cout << "This is a healthy fruit and vegetable salad." << endl;
    }
};

int main() {
    Salad fruitVegSalad;

    // Accessing methods from multiple base classes
    fruitVegSalad.Fruit::category();  // Avoid ambiguity by specifying Fruit's method
    fruitVegSalad.Fruit::type();  // From Fruit or Vegetable (you can specify if needed)
    fruitVegSalad.Vegetable::type();  // From Fruit or Vegetable (you can specify if needed)
    fruitVegSalad.dish();  // From Salad class

    return 0;
}
