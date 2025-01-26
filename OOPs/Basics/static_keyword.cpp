#include<iostream>
using namespace std;

class Icecream {
private:
    string topping;
    string flavor;
    double price;

public:
    static int iceCreamsLeft;
    Icecream(string flavor, string topping, double price) : flavor(flavor), topping(topping), price(price) {}

    void wantIcecream() {
        if (iceCreamsLeft <= 0) {
            cout << "There are no more ice-creams left!" << endl;
            return;
        }
        iceCreamsLeft--;
        cout << "Here is your " << flavor << " flavored icecream with " << topping << " topping for the price of " << price << endl;
    }
};

// :: - Scope Resolution Operator
int Icecream::iceCreamsLeft = 5;

int main() {
    // Icecream    c1("Chocolate", "Chocolate Syrup", 100), 
    //             c2("Vanilla", "Gems", 80), 
    //             c3("ButterScotch", "Dry Fruits", 120), 
    //             c4("Rajbhog", "Kesar", 230), 
    //             c5("American Nuts", "Tutti frutti", 140);
    
    Icecream c6("Mint Chocolate", "Hot Chocolate", 230);

    cout << Icecream::iceCreamsLeft << endl;
    // c1.wantIcecream();
    // c2.wantIcecream();
    // c3.wantIcecream();
    // c4.wantIcecream();
    // c5.wantIcecream();
    c6.wantIcecream();
    cout << c6.iceCreamsLeft << endl;


    return 0;
}