#include<iostream>
using namespace std;

class MyClass {
    private:
    int data;

    public:
    MyClass(int d) : data(d) {}

    friend void printData(const MyClass& obj);    //Made Friend
};

void printData(const MyClass& obj) {
    cout << "Data in MyClass: " << obj.data << endl;    //using Friendship
}

int main() {
    MyClass obj(43);

    printData(obj);

    return 0;
}