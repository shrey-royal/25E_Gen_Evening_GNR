#include<iostream>
#include<stdbool.h>
#include"Student.cpp"
#include"Course.cpp"
using namespace std;

int main() {
    Course c("PHY307", "Physics");

    c.addStudentsToCourse(101, "Yashvi");
    c.addStudentsToCourse(102, "Daisy");
    c.addStudentsToCourse(103, "Teerth");
    c.addStudentsToCourse(104, "Uday");
    c.addStudentsToCourse(105, "Harsh");
    // c.addStudentsToCourse(106, "Panth");

    c.getAllStudentsList();

    c.updateStudentDetails(101, "Yashvi Patel");
    //match id:name -> update

    c.getAllStudentsList();

    c.searchStudentInCourseById(104);
    c.searchStudentInCourseByName("uday");  //caseless comparision
    
    return 0;
};