/*
Given an integer, a, print "Big" if the number is greater than 100, and print "Number" regardless of it's size
*/

#include <iostream>
using namespace std;

int main() {
    int a;

    //getting the number
    cout << "Enter a number: ";
    cin >> a;

    //printing "Big" if the number is greater than 100
    if (a > 100) {
        cout << "Big ";
    }

    //printing "Number" regardless of the numbers size
    cout << "Number";

    return 0;
}