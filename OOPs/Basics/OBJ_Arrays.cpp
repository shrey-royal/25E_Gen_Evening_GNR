#include<iostream>
using namespace std;

class Book {
    int isbn;
    string name;
    string author;
    string genre;
    int pages;
    double price;

public:
    void setBookDetails(int isbn, string name, string author, string genre, int pages, double price) {
        this->isbn = isbn;
        this->name = name;
        this->author = author;
        this->genre = genre;
        this->pages = pages;
        this->price = price;
    }

    void getBookDetails() {
        cout << "ISBN: " << isbn << endl;
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: " << price << endl;
    }

    string toString() {
        return "[ " + to_string(isbn) + ", " + name + ", " + author + ", " + genre + ", " + to_string(pages) + ", " + to_string(price) + " ]";
    }
};

int main() {
    Book book;

    book.setBookDetails(121, "ANSI C", "E. BalaguruSwamy", "Education", 400, 500);
    // book.getBookDetails();

    cout << book.toString();

    cout << sizeof(book);

    return 0;
}


/*
Class 1: Student
    - roll no
    - name
    - grade
    - score
    - fees

Class 2: Employee
    - id
    - name
    - desg
    - salary
    - dept

setDetails(), getDetails(), toString()
*/