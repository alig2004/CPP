/*
Given an integer, n, write a program to print a right-angle triangle wall. The length of the height and base are both n 
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    //getting n from user
    cout << "Please enter a number: ";
    cin >> n;


    //outer loop, where i is the number of rows
    for (int i = 1; i <= n; i++) {

        //inner loop, where j is the number of columns
        for (int j = 1; j <= i; j++) {

            //printing part of the triangle
            cout << "* ";
        }

        //moving onto a new line for the next row
        cout << endl;
    }

    return 0;
}