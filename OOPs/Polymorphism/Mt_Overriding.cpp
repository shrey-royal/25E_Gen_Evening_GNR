#include <iostream>
using namespace std;

class Drink
{
public:
    string name;

    Drink(string n) : name(n) {}

    virtual void serveDrink()
    {
        cout << "Drink: Servicing a generic drink.\n";
    }
};

class MockTail : public Drink
{
public:
    MockTail(string n) : Drink(n) {}

    void serveDrink() override
    {
        cout << "Mocktail: Serving " << name << " in a fancy glass with fruit garnishing." << endl;
    }
};

class ColdDrink : public Drink
{
public:
    ColdDrink(string n) : Drink(n) {}

    void serveDrink() override
    {
        cout << "ColdDrink: Serving " << name << " chilled with ice cubes." << endl;
    }
};
 
int main()
{
    Drink* d = NULL;

    d = new Drink("Water");
    d->serveDrink();

    d = new MockTail("Virgin Mojito");
    d->serveDrink();

    d = new ColdDrink("Pepsi");
    d->serveDrink();

    return 0;
}