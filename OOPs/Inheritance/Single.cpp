#include<iostream>
#include<iomanip>
using namespace std;

class Vehicle {
    protected:
    string make;
    string model;
    double price;
    int year;

    void showCar() {
        cout << "(" << make << ", " << model << ", " << setprecision(20) << price << ", " << year;
    }

    public:
    Vehicle() : make("Tata"), model("Tigor"), price(600000), year(2024) { }

    Vehicle(string make, string model, double price, int year) : make(make), model(model), price(price), year(year) { }
};

class Car : public Vehicle {
    private:
    string color;
    string type;
    int noOfAirbags;
    double mileage;

    public:
    Car() : color("White"), type("Hatchback"), noOfAirbags(4), mileage(20.0f) { }

    Car(string make, string model, double price, int year, string color, string type, int noOfAirbags, double mileage) : Vehicle(make, model, price, year), color(color), type(type), noOfAirbags(noOfAirbags), mileage(mileage) { }

    void getCarDetails() {
        showCar();
        cout << ", " << color << ", " << type << ", " << noOfAirbags << ", " << setprecision(4) << mileage << ")" << endl;
    }
};

int main() {
    Car c1, c("Nissan", "GTR", 5000000, 2002, "Black", "Sports", 0, 12.1);
    c.getCarDetails();
    c1.getCarDetails();

    return 0;
}

/*
Tasks:

1. Vehicle Inheritance Hierarchy: Implement a program that demonstrates single inheritance by creating a base class 'Vehicle' with derived classes 'Car', 'Motorcycle', and 'Truck'. Each derived class should inherit properties and methods from the base class while also adding its own unique characteristics.

2. Employee Inheritance: Develop a system for managing employees in an organization using inheritance. Create a base class 'Employee' with derived classes 'Manager', 'Engineer', and 'Clerk'. Each derived class should inherit common attributes and methods from the base class while having specialized features specific to their role.

3. Geometry Inheritance: Construct a program to represent various geometric shapes using inheritance. Define a base class 'Shape' and derived classes such as 'Circle', 'Square', and 'Triangle'. Implement methods to calculate area and perimeter for each shape, inheriting appropriate properties and behaviors from the base class.

4. Animal Inheritance: Build a system to model different animals using inheritance. Design a base class 'Animal' with derived classes like 'Mammal', 'Bird', and 'Reptile'. Each derived class should inherit common traits from the base class while also possessing distinct characteristics inherent to their category.

5. Bank Account Inheritance: Create a banking application to manage different types of bank accounts utilizing inheritance. Develop a base class 'Account' with derived classes 'SavingsAccount', 'CheckingAccount', and 'CreditAccount'. Implement methods for deposit, withdrawal, and interest calculation, inheriting appropriate functionalities from the base class.

*/