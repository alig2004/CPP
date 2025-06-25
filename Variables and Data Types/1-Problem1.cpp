/*
You have to declare 4 variables a, b, c, d of int, float, double and long long respectively in the main function.
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // declare the variables here
    int a;
    float b;
    double c;
    long long d;

    // variables declaration checking
    if ((typeid(a) == typeid(int)) and (typeid(b) == typeid(float)) and
        (typeid(c) == typeid(double)) and (typeid(d) == typeid(long long)))
        cout << "verified\n";

    return 0;
}