/*
Given an integer, a, print "Big" if the number is greater than 100 and "Number" if is less than or equal to 100
*/

#include <iostream>
using namespace std;

int main() {
    int a;

    //getting the number from user
    cout << "Please enter a number: ";
    cin >> a;

    //printing "Big" if it's greater than 100 and "Number" if it is less than or equal to 100
    if (a > 100) {
        cout << "Big\n";
    } else {
        cout << "Number\n";
    }

    return 0;
}