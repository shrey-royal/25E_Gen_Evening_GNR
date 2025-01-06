#include<iostream>
using namespace std;

class Book {
    public:
    int isbn;
    string name;
    string author;
    double price;

    Book() : isbn(0), name(""), author(""), price(0) {}

    Book(int isbn, string name, string author, double price) {
        this->isbn = isbn;
        this->name = name;
        this->author = author;
        this->price = price;
    }

    void getBook() {
        cout << "(" << isbn << ", " << name << ", " << author << ", " << price << ")" << endl;
    }
};

class Library {
    private:
    static const int borrowLimit = 2;
    int count;
    string memberName;
    Book book[borrowLimit];    //Aggregation -> represents HAS-A Relationship

    public:
    Library(string memberName) {
        this->memberName = memberName;
        count = 0;
    }
    
    string getMemberName() {
        return this->memberName;
    }

    void borrowBook(Book book) {
        if (count < 2) {
            this->book[count++] = book;
        } else {
            cout << "Borrow Limit reached!" << endl;
        }
    }
};

int main() {
    Book b(101, "Book 1", "Author 1", 120);
    Book b1(102, "Book 2", "Author 2", 890);
    Library lib("Member 1");

    cout << "Member Name: " << lib.getMemberName() << endl;
    lib.borrowBook(b);
    lib.borrowBook(b1);
    // lib.borrowBook(b);   //Borrow Limit reached!


    return 0;
}

/*
Aggregation is when you create/use the object of a class inside another class as an instance member;


Next: add, listall, listSpecific, Update, Delete

*/