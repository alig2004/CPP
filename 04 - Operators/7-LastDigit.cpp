/*
Given an integer, n, write a program to find the last digit of n
*/

#include <iostream>
using namespace std;

int main() {
    int n, lastDigit;

    //get number from user
    cout << "Enter a number: ";
    cin >> n;

    //find the last digit of that number
    lastDigit = abs(n%10);

    //print last digit
    cout << "The last digit of " << n << " is " << lastDigit;

    return 0;
}