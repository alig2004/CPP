/*
Given an integer, n, find the nth term in the fibonacci sequence
*/

#include <iostream>

int main() {
    int n;
    int a, b, c;

    //initialising the first two terms
    a = 1; 
    b = 1;

    //getting the term to find
    std::cout << "Enter a number: ";
    std::cin >> n;

    //finding the nth term
    for (int i = 2; i<n; i++) {
        c = a+b;
        a = b;
        b = c;
    }

    std::cout << c;

    return 0;
}