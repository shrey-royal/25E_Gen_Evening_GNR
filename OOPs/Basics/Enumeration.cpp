#include<iostream>
using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE,
};

class ColoredObject {
    private:
    Color color;

    public:
    ColoredObject(Color color) {
        this->color = color;
    }

    Color getColor() const {
        return color;
    }

    void setColor(Color color) {
        this->color = color;
    }
};


int main() {
    ColoredObject obj(Color::GREEN);

    cout << "Current Color: " << obj.getColor() << endl;
    obj.setColor(BLUE);
    cout << "Current Color: " << obj.getColor() << endl;

    int a = RED;
    cout << a << endl;

    return 0;
}

/*
:: -> scope resolution operator
-> resolves the scope of any data/methods.
*/