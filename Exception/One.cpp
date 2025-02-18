#include<iostream>
#include<vector>
using namespace std;

void division(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Trying to divide by zero.");
    }
    cout << "Division: " << a/b << endl;
}

int main() {
    vector<int> v = {1, 23, 1223, 23, 312, 34, 345, 12};
    cout << "Before Exception" << endl;
    
    try {
        cout << "In try" << endl;
        
        // v.reserve(1000000000);   //bad_alloc
        cout << v.at(30) << endl;   //out_of_range
        // division(200,0);         //invalid_argument

        cout << "End try" << endl;
    } catch(const out_of_range& e) {
        cerr << "Out of range Exception: The index that you are trying to access is greater than the actual length of the vector." << endl;
    } catch(const invalid_argument& e) {
        cerr << "Invalid Argument Exception: " << e.what() << endl;
    } catch(...) {
        cout << "Exception Occured..." << endl;
    }

    cout << "After Exception" << endl;

    return 0;
}