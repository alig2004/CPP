/*
Given two numbers, a and b, find the GCD of these numbers
*/

#include <iostream>

int main() {
    int a, b;
    int gcd = 0;
    int smaller;

    //getting a and b
    std::cout << "Enter 2 numbers: \n";
    std::cin >> a;
    std::cin >> b;

    //figuring out which is smaller
    if (a > b) {
        smaller = b;
    } else {
        smaller = a;
    }

    //looping to get GCD, until smaller number is reached
    for (int i=1; i<=smaller; i++) {
        
        //if a and b are divisible by i, set gcd to i
        if ( (a%i == 0) && (b%i == 0)) {
            gcd = i;
        }

    }

    //printing gcd
    std::cout << "GCD(" << a << "," << b << ") = " << gcd;


    return 0;
}