#include<iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name; //one word
    // getline(cin, name); // whole line

    cout << "Name is " << name << endl;

    for (int i=0; i<name.length(); i++) {
        cout << name[i] << endl;
    }

    cout << name.length() << endl;

    return 0;
}