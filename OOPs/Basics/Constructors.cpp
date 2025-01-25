#include<iostream>
using namespace std;

class Recipe {
public:
    string name;
    int servings;

    //Default constructor
    Recipe() {
        name = "Recipe Name";
        servings = 4;
        cout << "Default Constructor called!" << endl;
    }

    //Parameterized constructor
    Recipe(string name, int servings) {
        this->name = name;
        this->servings = servings;
        cout << "Parameterized Constructor called!" << endl;
    }

    //Copy Constructor
    Recipe(Recipe& obj) {
        this->name = obj.name;
        this->servings = obj.servings;
    }

    void display() {
        cout << "Recipe Name: " << name << ", Servings: " << servings << endl;
    }
};

int main() {
    // string name;
    // int servings;

    // cout << "Enter name of recipe: ";
    // getline(cin, name);

    // cout << "Enter servings: ";
    // cin >> servings;
    
    // cout << endl;

    // Recipe r1, r2("Pancakes", 3);

    // r1.display();
    // r2.display();

    Recipe recipe("Dalgona Coffee", 1);
    Recipe another_recipe(recipe);

    // recipe.display();
    another_recipe.display();

    return 0;
}

/*
Constructor:
    A type of special method which is used to initialize the attribute in a class.s
    A constructor always invoked automatically when the object is created.
    There are 3 different types of constructor in cpp.
        - Default Constructor (Non-Parameterized)
        - Paramterized Constructor
        - Copy constructor

Rules to make a constructor:
    - The name of the constructor should be the same as it's class name.
    - There should be no return type defined while declaring the constructor
    - We can not call constructor explicitly

*/