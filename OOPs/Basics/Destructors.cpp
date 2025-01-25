#include<iostream>
using namespace std;

class MyClass {
public:
    int size;
    char *arr = NULL;

    MyClass(int size) {
        this->size = size;
        arr = (char*)malloc(size);
        cout << "Enter characters: ";
        cin >> arr;
    }

    void display() {
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~MyClass() {
        free(arr);
        arr = NULL;
        cout << "Destructor Called!" << endl;
    }
};

int main() {
    MyClass obj(10);

    obj.display();

    return 0;
}