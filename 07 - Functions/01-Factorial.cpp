/*
Given a positive integer, n, find the factorial of n (non-recursive)
*/

#include <iostream>

void factorial(int n) {
    int fact = 1;

    for (int i=2; i<=n; i++) {
        fact = fact * i;
    }

    std::cout << "The factorial of " << n << " is " << fact;

    return;
}

int main() {
    int num;

    //getting num from user
    std::cout << "Please enter a number: ";
    std::cin >> num;

    //calling factorial()
    factorial(num);

    return 0;
}