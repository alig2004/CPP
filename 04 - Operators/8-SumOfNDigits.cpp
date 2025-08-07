/*
Given an integer, n, find the sum of all digits from 1 to n
*/

#include <iostream>
using namespace std;

class Solution {
    public:
        int sumOfN(int n) {
            int sum = 0;

            sum = (n * (n+1) ) / 2;

            return sum;
        }
};

int main() {
    int num;

    Solution s;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of 1 to " << num << " is " << s.sumOfN(num);

    return 0;
    
}

