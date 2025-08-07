/*
Given two numbers, a and b, output 1 if a is greater and 0 if b is greater
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;

    if (a > b) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}