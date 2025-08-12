/*
Given an integer, print all of its divisors in a single line
*/

#include <iostream>

class Solution {
    public:
        void findDivisors(int n) {
            for (int i=1; i<=n; i++) {
                
                if (n%i == 0) {
                    std::cout << i << " ";
                }
            }
        }
};

int main() {
    int num;
    Solution sol;

    //get num from user
    std::cout << "Please enter a number: ";
    std::cin >> num;

    //calling findDivisors()
    sol.findDivisors(num);

    return 0;
}