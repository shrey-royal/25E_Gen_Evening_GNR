#include<iostream>
#include<math.h>
#include<iomanip>   //input output manipulation
using namespace std;

int main() {
    double entries[] = {
        2300000.22,
        2600876.223,
        1193897.887,
        9988675.331,
        62881673.22,
        118391278.001,
        786877856.22
    };

    for (size_t i = 0; i < 7; i++) {
        // round(entries[i]);
        cout << setprecision(10) << round(entries[i]) << endl;
    }

    //storage classes - auto
    // for (auto &&element : entries) {
    //     cout << setprecision(10) << element << endl;
    // }
    
    

    //ceil
    //floor
    //round

    return 0;
}