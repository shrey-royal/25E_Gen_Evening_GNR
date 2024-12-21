#include<iostream>
#include<time.h>
using namespace std;

int main() {
    string fruit = "Cherimoya";

    for (char c : fruit) {
        cout << c << " ";
    }

    srand(time(0));

    int size;
    cout << "\nEnter size: ";
    cin >> size;

    int nums[size] = {0};

    for (size_t i = 0; i < size; i++) {
        nums[i] = rand() % 100 + 1;
    }

    for (int n : nums) {
        cout << n << " ";
    }

    return 0;
}
