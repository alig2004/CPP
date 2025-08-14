/*
Given a number, n, find and display its prime factors in increasing order
*/

#include <iostream>

bool isPrime(int z);
void primeFactors(int y);

int main() {
    int n;

    //getting n from user
    std::cout << "Enter a number to display its prime factors: ";
    std::cin >> n;

    primeFactors(n);

    return 0;
}

bool isPrime(int z) {

    //loop through 2 until z-1 to check that z is indivisible by all these numbers (i.e. z is prime)
    for (int i=2; i<z; i++) {

        //if z is divisible by any of the numbers, return false
        if (z%i == 0) {
            return false;
        }
    }

    //if z is indivisible by all of the numbers, return true as it is prime
    return true;
}

void primeFactors(int y) {

    //looping through 2 until y to check for factors
    for (int i=2; i<=y; i++) {
        
        //check if the current value of i is a prime (i.e. it can be a factor of y)
        if (isPrime(i)) {
            int x = i;

            //loop through until y is no longer divisible by x
            while (y%x == 0) {
                std::cout << i << " "; //print the factor
                x = x*i;
            }
        }
    }
}