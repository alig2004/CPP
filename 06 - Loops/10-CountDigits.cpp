/*
Given a integer, find the number of digits in it
*/

#include <iostream>

class Solution {
    public:
        int findDigits(int n) {
            int count = 0;
            while (n != 0) {
                count += 1;
                n /= 10;
            }

            return count;
        }
};

int main() {
    int num;
    Solution sol;

    //get num from user
    std::cout << "Please enter a number: ";
    std::cin >> num;

    //calling findDigits()
    std::cout << num << " has " << sol.findDigits(num) << " digits";

    return 0;
}