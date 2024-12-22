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
    Book library[10];

    library[0].setBookDetails(12345, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 218, 799.00);
    library[1].setBookDetails(67890, "To Kill a Mockingbird", "Harper Lee", "Fiction", 281, 599.00);
    library[2].setBookDetails(11121, "1984", "George Orwell", "Dystopian", 328, 650.00);
    library[3].setBookDetails(13141, "Moby Dick", "Herman Melville", "Adventure", 585, 950.00);
    library[4].setBookDetails(15161, "The Odyssey", "Homer", "Epic", 541, 1125.00);
    library[5].setBookDetails(17181, "Pride and Prejudice", "Jane Austen", "Romance", 279, 699.00);
    library[6].setBookDetails(19202, "War and Peace", "Leo Tolstoy", "Historical Fiction", 1225, 1499.00);
    library[7].setBookDetails(21222, "The Catcher in the Rye", "J.D. Salinger", "Fiction", 277, 799.00);
    library[8].setBookDetails(23242, "Brave New World", "Aldous Huxley", "Dystopian", 311, 725.00);
    library[9].setBookDetails(25262, "The Lord of the Rings", "J.R.R. Tolkien", "Fantasy", 1216, 2200.00);

    // for (Book b : library) {
    //     // b.getBookDetails();
    //     // cout << "-------------------------------------------" << endl;

    //     cout << b.toString() << endl;
    // }

    for (int i = 0; i < 10; i++) {
        library[i].getBookDetails();
        cout << "-------------------------------------------" << endl;
    }


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