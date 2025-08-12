/*
Given an integer, n, output it's factorial
*/

#include <iostream>

int main() {
    int n;
    int fact = 1;

    std::cout << "Please enter a number: ";
    std::cin >> n;

    while (n != 0) {
        fact *= n;
        n--;
    }

    std::cout << fact;

    return 0;
}