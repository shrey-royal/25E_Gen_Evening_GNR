#include<iostream>
#include<string.h>
using namespace std;
/*
struct Student {
    char name[80];
    int age;
    float percentage;
};

struct Student* emp = NULL;

int main() {
    emp = (struct Student*) malloc(sizeof(struct Student));

    strcpy(emp->name,"Panth");
    emp->age = 21;
    emp->percentage = 95.5;

    cout << "Name: " << emp->name << endl;
    cout << "Age: " << emp->age << endl;
    cout << "Percentage: " << emp->percentage << "%" << endl;

    return 0;
}
*/


class Student {
public:
    char name[80];
    int age;
    float percentage;
};

Student* emp = NULL;

int main() {
    emp = (Student*) malloc(sizeof(Student));

    strcpy(emp->name,"Panth");
    emp->age = 21;
    emp->percentage = 95.5;

    cout << "Name: " << emp->name << endl;
    cout << "Age: " << emp->age << endl;
    cout << "Percentage: " << emp->percentage << "%" << endl;

    return 0;
}