#include<iostream>
using namespace std;

int main() {
    string exotic_fruits[] = {
        "Dragon Fruit",
        "Kiwi",
        "Durian",
        "Jack Fruit",
        "Lucuma",
        "Fuyu Persimmon",
        "Pomelo",
        "Atemoya",
        "Black Sapote",
        "Cherimoya"
    };
    int min = INT32_MAX;
    int max = 0;    //why only 0 zero works here

    for (int i = 0; i < 10; i++) {
        if (exotic_fruits[i].length() < min) {
            min = exotic_fruits[i].length();
        }

        if (exotic_fruits[i].length() > max) {
            max = exotic_fruits[i].length();
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    
    return 0;
}