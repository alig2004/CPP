/*
Given 3 integers, a, d and n, where a is the first term in a sequence, d is the common difference, and n is the term to find, write a program to calculate the nth term of an arithmetic progression sequence
*/

#include <iostream>
using namespace std;

class Solution {
    public: 
        int nthTerm(int a, int d, int n) {
            int term = a + ( (n-1) * d);

            return term;
        }
};

int main() {
    Solution s;
    int first, diff, number;

    cout << "Enter the first number of the sequence: ";
    cin >> first;
    cout << "Enter the common difference of the sequence: ";
    cin >> diff;
    cout << "Enter the number of the term you'd like to find: ";
    cin >> number;

    cout << "The term is " << s.nthTerm(first, diff, number);

    return 0;
}