/*
Given two positive integers, a and b, perform a bitwise right shift on a by b places
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two positive integers:\n";
    cin >> a;
    cin >> b;

    cout << (a>>b);

    return 0;
}