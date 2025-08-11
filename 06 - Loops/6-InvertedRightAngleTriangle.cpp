/*
Given an integer, n, print an inverted right angle triangle where the base and height are both n
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    //getting size of triangle from user
    cout << "Enter a number: ";
    cin >> n;

    int i = n;

    //outer loop to control rows
    while (i > 0) {
        int j = 1;

        //printing spaces
        while (j <= n-i) {
            cout << "  ";
            j++;
        }

        //printing stars
        while (j <= n) {
            cout << "* ";
            j++;
        }

        //moving to new row
        cout << endl;
        i--;
    }

    return 0;
}