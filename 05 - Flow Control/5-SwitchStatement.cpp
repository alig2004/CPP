/*
Given a number, a, print its value in words (e.g. 1 = "One") for all values from 1-9. If number is outside this range, print "Unknown"
*/

#include <iostream>
using namespace std;

int main() {
    int a;

    //getting number from user
    cout << "Enter an integer: ";
    cin >> a;

    //switch statement to print the value of a in words or unknown if it's not in the range of 1-9
    switch(a) {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        default:
            cout << "Unknown";

    }

    return 0;
}