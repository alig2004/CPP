/*
Given an integer, n, print a square wall using nested loops
*/

#include <iostream>

int main() {
    int n;

    //getting n from user
    std::cout << "Enter a number: ";
    std::cin >> n;

    //loop to control rows
    for (int i = 1; i<=n; i++) {

        //loop to control columns
        for (int j=1; j<=n; j++) {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    return 0;
}