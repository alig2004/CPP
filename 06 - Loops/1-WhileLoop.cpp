/*
Given a number, x, print the numbers from 0 to x in decreasing order along a single line
*/

#include <iostream>
using namespace std;

int main() {
    int x;

    //getting number from user
    cout << "Enter a number: ";
    cin >> x;

    while (x >= 0) {
        cout << x << " ";

        x--;
    }

    return 0;
}