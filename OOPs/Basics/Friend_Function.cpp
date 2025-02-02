#include<iostream>
using namespace std;

class Panth {
private:
    int data = 23;

public:
    friend void exploit(Panth&);
};

void exploit(Panth& obj) {
    cout << obj.data << endl;
}

void fun() {
    Panth p;
    
    exploit(p);
}

int main() {

    fun();

    return 0;
}