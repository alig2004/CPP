/*
Given an input string s, print it and move the cursor to the next line
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    //print s and move cursor to new line
    cout << s << endl;

    return 0;
}