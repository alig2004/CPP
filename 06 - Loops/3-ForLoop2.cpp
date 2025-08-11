/*
Given a string, s, print all characters of even index
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        void printEvenIndex(string s) {
            for (int i = 0; i < s.length(); i=i+2) {
                cout << s[i];
            }
        }
};

int main() {
    string s;
    Solution sol;

    //getting string from user
    cout << "Enter a string: ";
    getline(cin, s);

    //calling printEvenIndex()
    sol.printEvenIndex(s);

    return 0;
}