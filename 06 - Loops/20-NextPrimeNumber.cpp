/*
Given an integer, n, find and output the first prime number greater than n
*/

#include <iostream>

int main() {
    int n, prime;

    std::cout << "Please enter a number: ";
    std::cin >> n;

    prime = n + 1;

    //loop that will continue until prime is found
    while (true) {
        int i;

        //loop to check if prime is divisible by any numbers between 2 and prime-1
        for (i=2; i<prime; i++) {
            //if it is divisible by any of these numbers, break from inner loop
            if (prime%i == 0) {
                break;
            }
        }

        //if i is now equal to prime (i.e. indivisible in previous loop), prime has been found and program can break from loop
        if (i==prime) {
            //std::cout << prime;
            break;
        }

        //if this isn't the case, increment prime and try again
        prime++;
    }

    std::cout << prime << " is the first prime after " << n;

    return 0;
}