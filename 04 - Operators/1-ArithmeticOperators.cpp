/*
Given two integer variables, x and y, perform the following operations:
    p: Addition
    q: Subtraction
    r: Multiplication
    s: Division
    t: Modulus
*/

#include <iostream>
using namespace std;

int main() {
    int x, y, p, q, t;
    float r, s;

    //getting the values for x and y
    cout << "Enter your first integer: ";
    cin >> x;
    cout << "Enter your second integer: ";
    cin >> y;

    //performing the operations and storing their results
    p = x + y;
    q = x - y;
    r = x*y;
    s = x/y;
    t = x%y;

    //outputting the results
    cout << p << " " << q << " " << r << " " << s << " " << t << endl;

    return 0;
}