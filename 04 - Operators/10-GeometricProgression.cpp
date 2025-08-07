/*
Given 3 integers, a, r and n, where a is the first term in a sequence, r is the common ration, and n is the term to find, write a program to calculate the nth term of an geometric progression sequence
*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
    public: 
        int nthTerm(int a, int r, int n) {
            int term = a * pow(r, n-1);

            return term;
        }
};

int main() {
    Solution s;
    int first, ratio, number;

    cout << "Enter the first number of the sequence: ";
    cin >> first;
    cout << "Enter the common ratio of the sequence: ";
    cin >> ratio;
    cout << "Enter the number of the term you'd like to find: ";
    cin >> number;

    cout << "The term is " << s.nthTerm(first, ratio, number);

    return 0;
}