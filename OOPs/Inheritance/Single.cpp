#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(const string& accNo, const string& accHolder, double initialbalance) : accountNumber(accNo), accountHolder(accHolder), balance(initialbalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    bool withdraw(double amount) {
        if(amount > balance) {
            cout << "Insufficient balance." << endl;
            return false;
        } else {
            balance -= amount;
            logTransaction("Withdrawal", amount);
            return true;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << ", Balance: Rs." << balance << endl;
    }

    void logTransaction(const string& type, double amount) {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "Transaction: " << type << ", Amount: Rs." << amount << ", Date: " << dt;
    }

    ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
private:
    const int maxWithdrawals = 3;
    int withdrawalMade;
    double interestRate;
    const double minBalance = 500.0;
    const double penaltyFee = 50.0;

public:
    SavingsAccount(const string& accNo, const string& accHolder, double initialbalance, double interestRate) : BankAccount(accNo, accHolder, initialbalance), interestRate(interestRate), withdrawalMade(0) {}

    void applyMonthlyInterest() {
        if (balance > 0) {
            double interest = balance * (interestRate / 100);
            balance += interest;
            logTransaction("Interest Applied", interest);
        }
    }

    bool withdraw(double amount) {
        if (withdrawalMade >= maxWithdrawals) {
            cout << "Maximum withdrawals reached. Penalty Fee Applied: Rs." << penaltyFee << endl;
            balance -= penaltyFee;
            return false;
        }

        bool success = BankAccount::withdraw(amount);
        if (success) withdrawalMade++;
        checkMinimumBalance();
        return success;
    }

    void checkMinimumBalance() {
        if (balance < minBalance) {
            cout << "Balance below minimum! Service Fee of $" << penaltyFee << " applied.\n";
            balance -= penaltyFee;
            logTransaction("Service Fee Applied", penaltyFee);
        }
    }

    void displayBalance() {
        BankAccount::displayBalance();
        cout << "Withdrawals Made This Month: " << withdrawalMade << " (Max Allowed: " << maxWithdrawals << ")\n";
    }
};

int main() {
    SavingsAccount mySavings("1234567890", "Prachi", 1000.0, 2.0);

    cout << "\nInitial Account Details: " << endl;
    mySavings.displayBalance();

    cout << "\nMaking a deposit of Rs.500...\n";
    mySavings.deposit(500);

    cout << "\nAttempting 4 withdrawals of Rs.200 each...\n";
    for (int i = 0; i < 4; i++) {
        cout << "\nWithdrawal #" << (i+1) << ": ";
        mySavings.withdraw(200);
    }

    cout << "\nApplying monthly interest...\n";
    mySavings.applyMonthlyInterest();

    cout << "\nFinal Account Details: \n";
    mySavings.displayBalance();
    

    return 0;
}