/*
Given an integer, n, output "True" if it is a prime and "False" if it is not
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    if ( (n==0) || (n==1)) {
        std::cout << "False";
        return 0;
    }

    for (int i = 2; i<n; i++) {
        if (n%i == 0) {
            std::cout << "False";
            return 0;
        }
    }

    std::cout << "True";
    
    return 0;
}