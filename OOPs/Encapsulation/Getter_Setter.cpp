#include<iostream>
#include<iomanip>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    double balance;
public:
    Account(int accNo, string name, double balance) : accNo(accNo), name(name), balance(balance) {}

    //Getters and Setters
    //setter
    void setAccNo(int new_accNo) { this->accNo = new_accNo; }

    void setName(string new_name) { this->name = new_name; }

protected:
    void setBalance(double new_balance) { this->balance = new_balance; }

public:
    //getter
    int getAccNo() { return this->accNo; }

    string getName() { return this->name; }

    double getBalance() { return this->balance; }
};

class SBI : public Account {
public:
    SBI(int accNo, string name, double balance) : Account(accNo, name, balance) {}

    void withdraw(double amount) {
        double current_balance = getBalance();
        if(amount <= current_balance-2000) {
            setBalance(current_balance - amount);
        } else {
            cout << "Insuficient Balance... (" << current_balance << ")" << endl;
        }
    }

    void deposit(int amount) {
        double current_balance = getBalance() + amount;
        setBalance(current_balance);
    }
};

int main() {
    SBI bank(123456, "Uday", 500000000);

    bank.deposit(45000000);
    cout << "Current balance is " << fixed << setprecision(2) << bank.getBalance() << endl;

    
    bank.withdraw(55000000);
    cout << "Current balance is " << fixed << setprecision(2) << bank.getBalance() << endl;

    return 0;
}