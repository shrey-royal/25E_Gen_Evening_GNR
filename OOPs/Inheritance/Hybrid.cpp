#include<iostream>
#include<iomanip>
using namespace std;

class Person {
    private:
    string name;

    public:
    Person() : name("name") {}

    Person(string name) : name(name) {}

    string getName() {
        return name;
    }
};

class Father : public Person {
    private:
    string business;
    double property;

    public:
    
    Father() {}

    Father(string name) : Person(name) {
        property = 1200000;
        business = "Industries";
    }

    double getProperty() {
        return property;
    }

    string getBusiness() {
        return business;
    }
};

class Mother : public Person {
    private:
    string manners;

    public:
    
    Mother () {}
    
    Mother(string name) : Person(name) {

        manners = "Respect Elders";
    }

    string getManners() {
        return manners;
    }
};

class Child : public Father, public Mother {
    public:
    
    Child() {}

    Child(string name) : Father(name), Mother(name) {}
};

int main() {
    Child c;

    cout << "Person: " << c.Mother::getName() << endl;

    cout << "Manners: " << c.getManners() << endl;
    cout << "Property: " << setprecision(10) << c.getProperty() << endl;
    cout << "Business: " << c.getBusiness() << endl;


    return 0;
}

/*
Task:

1. Vehicle Classification:
   Create a system to classify vehicles into different categories based on their type (e.g., car, motorcycle) and their engine type (e.g., electric, gas). Use hybrid inheritance to model this system effectively.

2. Employee Hierarchy:
   Design a system to represent employees in an organization. Employees can be categorized based on their role (e.g., manager, worker) and their specialization (e.g., IT, finance). Utilize hybrid inheritance to model this hierarchy.

3. Animal Kingdom:
   Develop a program to represent various animals and their characteristics. Animals can be categorized based on their species (e.g., mammal, bird) and their habitat (e.g., land, aquatic). Implement the system using hybrid inheritance.

4. Shape Hierarchy:
   Create a system to represent geometric shapes. Shapes can be categorized based on their type (e.g., circle, rectangle) and their properties (e.g., 2D, 3D). Use hybrid inheritance to model this hierarchy effectively.

5. Electronic Devices:
   Design a system to represent electronic devices such as smartphones, tablets, and laptops. Devices can be categorized based on their type (e.g., mobile, computer) and their power source (e.g., battery, electricity). Implement the system using hybrid inheritance to manage the complexity of the hierarchy.
*/