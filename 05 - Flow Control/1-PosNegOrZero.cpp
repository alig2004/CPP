/*
Given a number, a, print "Positive" if it is positive, "Negative" if it is negative, and "Zero" if it is zero
*/

#include <iostream>
using namespace std;

int main() {
    int a;

    //getting number from user
    cout << "Please enter a number: ";
    cin >> a;

    //checking if it is positive, negative or zero
    if (a > 0) {
        cout << "Positive";
    } else if (a < 0) {
        cout << "Negative";
    } else {
        cout << "Zero";
    }

    return 0;
}