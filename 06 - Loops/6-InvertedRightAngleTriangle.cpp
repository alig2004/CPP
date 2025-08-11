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

    for (int i = n; i>=1; i--) {
            
        for (int j = i; j>=1; j--) {
            cout << "* ";
        }
        
        cout << endl;
    }

    return 0;
}