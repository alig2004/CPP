/*
Given two strings (a and b) and a separator symbol (separator), print a and b such that they are separated by separator, followed by a new line
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, separator;
    getline(cin, a);
    getline(cin, b);
    getline(cin, separator);

    //print in the required format and followed by a new line
    cout << a << separator << b << endl;

    return 0;
}