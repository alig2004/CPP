/*
Given an inputted double, a, display it in scientific notation with 4 digits after the decimal point
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cin >> a;
    
    cout << std::scientific << setprecision(4);
    cout << a;

    return 0;
}