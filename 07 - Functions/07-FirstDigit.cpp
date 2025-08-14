/*
Given a number, n, use a function to find its first digit
*/

#include <iostream>

int firstDigit(int n);

int main() {
    int num;
    
    //getting num from user
    std::cout << "Enter a number: ";
    std::cin >> num;

    //displaying its first digit
    std::cout << "The first digit of " << num << " is " << firstDigit(num);

    return 0;
}

int firstDigit(int n) {
    while (n>9) {
        n /= 10;
    }

    return n;
}