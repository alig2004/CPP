/*
Given an integer, n, print a square wall of size n without nested loops
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    string s;

    //get n from user
    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        s += "* ";
    }

    for (int i=1; i<=n; i++) {
        cout << s << endl;
    }

    return 0;
}