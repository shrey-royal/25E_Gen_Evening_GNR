#include<iostream>
using namespace std;

class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0; // pure virtual method
    // virtual ~PaymentMethod() {}

    void fun() {
        cout << "fun!" << endl;
    }
};

class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of Rs." << amount << endl;
    }
};


class GPay : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing GPay payment of Rs." << amount << endl;
    }
};

    
class Bitcoin : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing Bitcoin payment of $" << amount << endl;
    }
};

int main() {
    PaymentMethod* method = NULL;

    method = new CreditCard();
    method->processPayment(12000);
    // delete method;

    method = new GPay();
    method->processPayment(150);
    // delete method;
    
    method = new Bitcoin();
    method->processPayment(126700);
    // delete method;

    return 0;
}