/*
Given four integer inputs, a, b, c, and d, write an expression to evaluate the following formula:
    a + b
    ----- + d
      c
*/

#include <iostream>
using namespace std;

class Solution {
    public: 
        int calculate(int a, int b, int c, int d) {
            int result = ( (a+b) / c ) + d;

            return result;
        }
};

int main() {
    Solution s;
    int w, x, y, z;

    cin >> w;
    cin >> x;
    cin >> y;
    cin >> z;

    cout << s.calculate(w, x, y, z);

    return 0;
}