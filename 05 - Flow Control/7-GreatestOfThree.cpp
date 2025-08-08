/*
Given three integers, x, y and z, find and print the greatest of these numbers
*/

#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Please enter 3 integers:\n";
    cin >> x;
    cin >> y;
    cin >> z;

    //if x is greater than or equal to y and z
    if ((x>=y) && (x>=z)) {
        cout << x;
    } else if ((y>=x) && (y>=z)) { //else if y is greater than or equal to x and z
        cout << y;
    } else { //else z is greatest
        cout << z;
    }

    return 0;
}