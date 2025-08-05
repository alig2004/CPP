/*
Given two inputs, a and b, print them in a single line with a space separating them and add a new line after
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);

    //print in the required format and a new line at the end
    cout << a << " " << b << endl;

    return 0;
}