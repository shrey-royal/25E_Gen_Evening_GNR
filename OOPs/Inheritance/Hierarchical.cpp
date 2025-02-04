#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;
public:
    void setDetails(const string& personName, int personAge) {
        name = personName;
        age = personAge;
    }

    void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class 1: Employee (inherits from Person)
class Employee : public Person {
private:
    string jobTitle;
public:
    void setJob(const string& title) {
        jobTitle = title;
    }

    void displayJob() {
        cout << "Employee Job Title: " << jobTitle << endl;
    }
};

// Derived Class 2: Manager (inherits from Person)
class Manager : public Person {
private:
    int teamSize;
public:
    void setTeamSize(int size) {
        teamSize = size;
    }

    void displayTeamSize() {
        cout << "Manager Team Size: " << teamSize << endl;
    }
};

int main() {
    // Creating an Employee object
    Employee emp;
    emp.setDetails("Smit", 300);
    emp.setJob("Software Engineer");
    emp.displayDetails();
    emp.displayJob();

    cout << endl;

    // Creating a Manager object
    Manager mgr;
    mgr.setDetails("Teerth", 45);
    mgr.setTeamSize(10);
    mgr.displayDetails();
    mgr.displayTeamSize();

    return 0;
}
