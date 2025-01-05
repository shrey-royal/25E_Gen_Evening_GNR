#include<iostream>
using namespace std;

class Animal {
    private:
    string name;

    public:
    Animal(string name) : name(name) {}

    void eat() {
        cout << name << " is eating!" << endl;
    }

    protected:
    string getName() {
        return name;
    }
};

class Dog : public Animal {
    public:
    Dog(string name) : Animal(name) {}
    void bark() {
        cout << getName() << " is barking!" << endl;
    }
};

class Cat : public Animal {
    public:
    Cat(string name) : Animal(name) {}
    void meow() {
        cout << getName() << " is meowing!" << endl;
    }
};

int main() {
    Dog d("Lucky");
    Cat c("Rosie");

    d.bark();
    d.eat();

    c.meow();
    c.eat();

    return 0;
}