#include <iostream>
#include <string>
using namespace std;

// Class representing a Student
class Student {
private:
    int id;
    string name;

public:
    // Default Constructor
    Student() : id(0), name("") {}

    // Parameterized Constructor
    Student(int id, string name) : id(id), name(name) {}

    // Getters
    int getId() { return id; }
    string getName() { return name; }

    // Setters
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }

    // Display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

// Class representing a Course that contains an array of Students (Aggregation)
class Course {
private:
    string courseName;
    Student students[10]; // Array of Student objects
    int studentCount;     // Keeps track of the number of students

public:
    // Constructor
    Course(string courseName) : courseName(courseName), studentCount(0) {}

    // Add a student (Create)
    void addStudent(int id, string name) {
        if (studentCount < 10) {
            students[studentCount++] = Student(id, name);
            cout << "Student added successfully.\n";
        } else {
            cout << "Error: Cannot add more students, course is full.\n";
        }
    }

    // Display all students (Read)
    void displayStudents() {
        cout << "Course: " << courseName << "\n";
        cout << "Students Enrolled:\n";
        for (int i = 0; i < studentCount; i++) {
            students[i].display();
        }
    }

    // Update a student by ID
    void updateStudent(int id, string newName) {
        for (int i = 0; i < studentCount; i++) {
            if (students[i].getId() == id) {
                students[i].setName(newName);
                cout << "Student with ID " << id << " updated successfully.\n";
                return;
            }
        }
        cout << "Error: Student with ID " << id << " not found.\n";
    }

    // Delete a student by ID
    void deleteStudent(int id) {
        for (int i = 0; i < studentCount; i++) {
            if (students[i].getId() == id) {
                // Shift all subsequent students one position left
                for (int j = i; j < studentCount - 1; j++) {
                    students[j] = students[j + 1];
                }
                studentCount--; // Decrease the student count
                cout << "Student with ID " << id << " deleted successfully.\n";
                return;
            }
        }
        cout << "Error: Student with ID " << id << " not found.\n";
    }
};

// Main Function
int main() {
    Course course("Computer Science");

    int choice, id;
    string name;

    do {
        cout << "\n===== Course Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Sort Student by ID (Actual Array will be changed!)\n";
        cout << "6. Search Student by name\n";
        cout << "7. Sort Students by Name (Only print the sorted details do not change the array)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Add Student
            cout << "Enter Student ID: ";
            cin >> id;
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, name);
            course.addStudent(id, name);
            break;

        case 2: // Display Students
            course.displayStudents();
            break;

        case 3: // Update Student
            cout << "Enter Student ID to Update: ";
            cin >> id;
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, name);
            course.updateStudent(id, name);
            break;

        case 4: // Delete Student
            cout << "Enter Student ID to Delete: ";
            cin >> id;
            course.deleteStudent(id);
            break;

        case 0: // Exit
            cout << "Exiting the program.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
