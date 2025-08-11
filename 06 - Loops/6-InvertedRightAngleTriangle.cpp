/*
Given an integer, n, print an inverted right angle triangle where the base and height are both n
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;

    //getting size of triangle from user
    cout << "Enter a number: ";
    cin >> n;

    //outer loop to control rows
    while (i <= n) {
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
        i++;
    }

    return 0;
}