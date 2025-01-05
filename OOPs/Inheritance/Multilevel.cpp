#include<iostream>
#include<iomanip>
using namespace std;

class Employee {
    private:
    string name;
    string desg;
    double salary;

    public:
    Employee(string name, string desg, double salary) {
        this->name = name;
        this->desg = desg;
        this->salary = salary;
    }

    void displayEmployee() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Desg: " << desg << endl;
        cout << "Employee Salary: " << setprecision(20) << salary << endl;
    }
};

class Manager : public Employee {
    private:
    string dept;

    public:
    Manager(string name, string desg, double salary, string dept) : Employee(name, desg, salary) {
        this->dept = dept;
    }

    void displayManager() {
        cout << "Manager Dept: " << dept << endl;
    }
};

class Developer : public Manager {
    private:
    string type;

    public:
    Developer(string name, string desg, double salary, string dept, string type) : Manager(name, desg, salary, dept) {
        this->type = type;
    }

    void displayDeveloper() {
        cout << "Type of Developer: " << type << endl;
    }
};

int main() {
    Developer dev("Dev 1", "Software Engineer", 45000000, "IT", "Backend");

    dev.displayEmployee();
    // dev.displayManager();
    dev.displayDeveloper();

    Manager manager("Sneha", "Sr. Manager", 20000, "Law");
    manager.displayEmployee();
    manager.displayManager();

    return 0;
}