#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    
    cout << a << ", " << b << endl;
    cout << "Addition of " << a << " and " << b << " is " << a+b << endl;
    return 0;
}

/*
stream -> flow of data

in cpp we use stream because the data is not directly printed on the console or taken from the console (it is taken from the buffer).
> buffer is a temporary storage area in the memory
> stream is used to transfer the data from the buffer to the console and vice versa

Advantages of using stream:
> we can use the same code to take input from the file and print the output on the file
> we can use the same code to take input from the console and print the output on the console


*/