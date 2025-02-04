#include <iostream>
#include <string>
using namespace std;

// Base Class for Multilevel Inheritance
class Vehicle {
public:
    void type() {
        cout << "I am a vehicle." << endl;
    }
};

// Derived Class for Multilevel Inheritance
class Car : public Vehicle {
public:
    void brand() {
        cout << "I am a car." << endl;
    }
};

// Another Derived Class for Multiple Inheritance
class Battery {
public:
    void batteryCapacity() {
        cout << "I have a battery capacity of 75 kWh." << endl;
    }
};

// Multilevel and Multiple Inheritance
class ElectricCar : public Car, public Battery {
public:
    void features() {
        cout << "I am an electric car with advanced features." << endl;
    }
};

int main() {
    ElectricCar tesla;

    // Demonstrating Multilevel Inheritance
    tesla.type(); // from Vehicle
    tesla.brand(); // from Car

    // Demonstrating Multiple Inheritance
    tesla.batteryCapacity(); // from Battery
    tesla.features(); // from ElectricCar

    return 0;
}
