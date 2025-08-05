/*
Given two inputs that are stored in variables a and b, print them in a single line without a space between them and add a new line at the end
*/

#include <iostream>
#include <string>
using namespace std;


class Solution {
    public:
        void concatAndPrint(string& a, string& b) {
            cout << a << b << endl;
        }
};

int main() {
    Solution s;

    string a, b;
    cin >> a;
    cin >> b;
    
    s.concatAndPrint(a, b);

    return 0;
}