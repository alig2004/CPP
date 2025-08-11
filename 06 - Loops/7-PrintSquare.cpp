/*
Given an integer, n, write a program to print the perimeter of a square using * characters
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    //getting n from user
    cout << "Please enter a number: ";
    cin >> n;

    //for loop to control number of rows
    for (int i = 1; i <= n; i++) {

        //for loop to control number of columns
        for (int j = 1; j <= n; j++) {

            //for first and last rows, print a full line
            if ((i == 1) || (i == n)) {
                cout << "* ";
            } else { //else, print just first and last column
                if ((j==1) || (j==n)) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}