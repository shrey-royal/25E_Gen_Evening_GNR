#include<iostream>
using namespace std;

int main() {
    // Declare and initialize a string
    string myStr = "Hello, World!";

    //length -> returns the length of the string
    // cout << myStr.length();
    
    //substr() -> used to extract a part of a string
    // string mySubStr = myStr.substr(7, 5);
    // cout << mySubStr << endl; 
    
    //find() -> returns index of found substring (returns -1 if not found)
    // int position = myStr.find(",  ");
    // cout << "found at index: " << position << endl;
    // if(position != string::npos) {
    //     cout << "found at position: " << position << endl;
    // } else {
    //     cout << "not found in the string." << endl;
    // }
    
    //replace() -> replaces a certain substring into the given string
    // myStr.replace(7, 5, "everyone");
    // cout << "After replacement: " << myStr << endl;
    
    //append() -> add new string at the end of an existing one
    // myStr.append(" Have a nice day!");
    // cout << "After appending: " << myStr << endl;
    
    //erase() -> used to remove a part of a string
    // myStr.erase(6, 9);
    // cout << "After erasing: " << myStr << endl;
    
    //compare() -> match 2 strings (output is same as strcmp())
    // string anotherString = "Hello, World!";
    
    // int comparision = myStr.compare(anotherString);
    // if(comparision == 0) {
    //     cout << "The strings are equal." << endl;
    // } else if(comparision < 0) {
    //     cout << "The first string is less than the second string." << endl;
    // } else {
    //     cout << "The first string is greater than the second string." << endl;
    // }
    
    //swap() -> used to swap 2 strings
    // string tempString = "Goodbye!";
    // cout << "Before Swap - myStr: " << myStr << ", tempString: " << tempString << endl;
    // myStr.swap(tempString);
    // cout << "After Swap - myStr: " << myStr << ", tempString: " << tempString << endl;
    
    //size() -> get the size in bytes
    // cout << "Size of the string in bytes: " << myStr.size() << endl;
    
    //resize() -> allocate a new size to the string
    // myStr.resize(50);
    // cout << "After resizing: " << myStr << endl;
    // cout << "Size of the string in bytes: " << myStr.size() << endl;
    
    //at() -> returns a character present the the specified index
    char character = myStr.at(12);
    cout << "Character at position 2: " << character << endl;
    

    return 0;
}