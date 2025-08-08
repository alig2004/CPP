/*
Given an integer, year, print "Leap Year" if it is a leap year and "Not Leap Year" if it is not
*/

#include <iostream>
using namespace std;

int main() {
    int year;

    //getting year off user
    cout << "Please enter a year: ";
    cin >> year;

    //if year is divisible by 4 but not 100, it is leap year
    if ( (year%4 == 0) && (year%100 != 0)) {
        cout << "Leap Year";
    } else if (year%400 == 0) { //else if the year is divisible by 400, it is a leap year
        cout << "Leap Year";
    } else { //else if isn't a leap year
        cout << "Not Leap Year";
    }

    return 0;
}