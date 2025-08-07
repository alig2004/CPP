/*
Given three positive integers, a, b and c, perform the following bitwise operations on them and display on a single line:
    v = a XOR a
    w = c XOR b
    x = a AND b
    y = c OR (a XOR a)
    z = NOT w
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int v, w, x, y, z;

    //getting values for a, b and c
    cout << "Please enter 3 integers: \n";
    cin >> a;
    cin >> b;
    cin >> c;

    //performing operations
    v = a ^ a;
    w = c ^ b;
    x = a & b;
    y = c | (a ^ a);
    z = ~w;

    //printing results
    cout << v << " " << w << " " << x << " " << y << " " << z << endl;

    return 0;
}