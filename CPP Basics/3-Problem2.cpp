/*
You are given a line of code that prints three integers a, b and c.
You need to comment on the line of code that prints integer b such that this line does not compile.
*/

#include <iostream>
using namespace std;

class Solution {
  public:
    void printValues(int a, int b, int c) {
        // code here
        
        cout << a << " ";
        //cout << b << " ";
        cout << c << " ";
    }
};