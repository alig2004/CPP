/*
Given two boolean operands, a and b, output the results of the following operations as true or false:
    a AND b
    a OR b
    NOT a
Assume that only 0 or 1 are input
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Solution {
  public:
    string booleanOperations(bool a, bool b) {
        bool p = a && b;
        bool q = a || b;
        bool r = !a;
        return (p ? "true" : "false") + string(" ") + (q ? "true" : "false") + string(" ") + (r ? "true" : "false");
    }
};

int main() {
    bool a, b;

    cin >> a;
    cin >> b;

    Solution s;

    cout << s.booleanOperations(a, b);

    return 0;
}