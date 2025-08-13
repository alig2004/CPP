/*
Given a number in binary, n, convert and display its decimal value
*/

#include <iostream>

int main() {
    int n;
    int val = 0;
    int base = 1;

    //getting n from user
    std::cout << "Enter a binary number: ";
    std::cin >> n;

    std::cout << n << " = ";

    while (n>0) {
        int lastDig = n%10; //getting the last (right-most) digit from n
        val += (lastDig * base); //adding its decimal value to val
        n /= 10; //removing the last (right-most) digit from n
        base *= 2; //updating base for next digit
    }

    std::cout << val ;

    return 0;
}