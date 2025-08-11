/*
Given a number n, print its multiples in a single line using a loop up to n*10
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    //getting n from user
    cout << "Please enter a number: ";
    cin >> n;

    //printing the multiples
    for (int i = 1; i<11; i++) {
        cout << n*i << " ";
    }

    return 0;
}