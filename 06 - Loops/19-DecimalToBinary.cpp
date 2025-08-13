/*
Given a number in decimal, n, convert and display its binary value
*/

#include <iostream>

int main() {
    int n;
    int binNum[32];
    int i = 0;
    int rem;

    //getting n from user
    std::cout << "Enter a decimal number: ";
    std::cin >> n;

    std::cout << n << " = ";

    while (n>0) {
        rem = n%2;
        binNum[i] = rem;
        n /= 2;
        i++;

        if (i == 32) {
            break;
        }
    }

    for (int j=i-1; j>=0; j--) {
        std::cout << binNum[j];
    }

    return 0;
}