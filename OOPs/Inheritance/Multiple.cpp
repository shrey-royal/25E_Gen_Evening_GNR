#include<iostream>
#include<iomanip>
using namespace std;

class Father {
    private:
    string business;
    double property;

    public:

    Father() {
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

class Mother {
    private:
    string manners;

    public:

    Mother() {
        manners = "Respect Elders";
    }

    string getManners() {
        return manners;
    }
};

class Child : public Father, public Mother {};

int main() {
    Child c;

    cout << "Manners: " << c.getManners() << endl;
    cout << "Property: " << setprecision(10) << c.getProperty() << endl;
    cout << "Business: " << c.getBusiness() << endl;


    return 0;
}