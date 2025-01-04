#include<iostream>
using namespace std;

class Account {
    public:
    int accno;
    string name;
    static float rateOfInterest;
    static int count;

    Account(int accno, string name) {
        this->accno = accno;
        this->name = name;
        count++;
    }

    void display();

    // void display() {
    //     cout << accno << " " << name << " " << rateOfInterest << endl;
    // }
};

float Account::rateOfInterest = 6.5;    // :: -> scope resolution operator
int Account::count = 0;

void Account::display() {
    cout << accno << " " << name << " " << rateOfInterest << endl;
}


int main() {
    Account a1(101, "Name 1");
    Account a2(204, "Name 2");

    // a1.rateOfInterest = 2.3;
    Account::rateOfInterest = 2.3;  //compile time memory allocation
    a1.display();
    a2.display();

    cout << "Number of Accounts = " << Account::count << endl;
}

/*
-> static keyword is used to make a variable or function static. variables or methods which are declared as static will get their memory on compile time.

Tasks:

1. "Create a class 'Counter' to keep track of the number of instances created. Use a static member variable 'instanceCount' to store the total number of objects created from the class and increment it every time an object is constructed."

2. "Implement a 'MathUtility' class with a static member function 'factorial(int n)' that calculates and returns the factorial of a given integer 'n'. The function should be accessible without creating an instance of the class."

3. "Design a 'Bank' class to represent a bank's financials. Use a static member variable 'totalAssets' to keep track of the sum of all customer account balances, and update it automatically every time a new account is created or an existing account balance changes."

4. "Develop a 'Student' class to represent students' academic records. Use a static member function 'calculateAverageScore(Student* students, int count)' that takes an array of 'Student' objects and calculates the average score of all the students."

5. "Create a 'Logger' class to maintain a log of system events. Use a static member function 'logEvent(string message)' to add entries to the log without creating an instance of the class. The log should be accessible and shared across all instances of the 'Logger' class."


*/