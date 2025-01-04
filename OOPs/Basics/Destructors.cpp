#include<iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
        cout << "Constructor called..." << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    ~Book() {
        cout << "Destructor called..." << endl;
        cout << "The book '" << title << "' by " << author << " published in " << year  << " has been destroyed." << endl;
    }
};

class ClassA {
    public:
    ClassA() {
        cout << "Default Constructor called!" << endl;
    }

    ~ClassA() {
        cout << "Destructor called!" << endl;
    }
};

void fun() {
    // ClassA obj, obj2;
    // cout << "objs are inScope!" << endl;

    Book b("Title", "Author", 1990);

    b.display();
}

int main() {
    fun();
    cout << "All Objs must be freed!" << endl;

    return 0;
}

/*
Destructors: The type of method that is called automatically when the object goes out of scope.

Tasks:

1. Create a class representing a car. Implement a destructor that prints a message indicating the destruction of a car object.

2. Design a class to manage student records. Implement a destructor that displays a message when a student record object is destroyed.

3. Develop a simple calculator class. Add a destructor that prints a farewell message when a calculator object is destroyed.

4. Build a class representing a shopping cart. Include a destructor that displays a message when a shopping cart object is destroyed.

5. Design a class representing a computer. Implement a destructor that prints a message when a computer object is destroyed.


*/