/*
Given two floats, a and b, output a/b with precision upto 3 places after the decimal point, adding a new line after printing
*/

#include <iostream>
#include <iomanip>
using namespace std;


class Solution {
    public:
        void divideAndPrint(float a, float b) {
            cout << fixed << setprecision(3);
            cout << (a/b) << endl;
        }
};

int main() {
    Solution s;

    float a, b;
    cin >> a;
    cin >> b;
    
    s.divideAndPrint(a, b);

    return 0;
}