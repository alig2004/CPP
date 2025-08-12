/*
Given two numbers, a and b, find their LCM
*/

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b) {
    //if either number is 0, their LCM is 0
    if ( (a == 0) || (b == 0)) {
        return 0;
    }

    return ( (a*b) / gcd(a,b) );
}

int main() {
    int a, b;

    //getting a and b from user
    std::cout << "Enter two numbers:\n";
    std::cin >> a;
    std::cin >> b;

    //displaying the LCM by calling lcm()
    std::cout << "LCM(" << a << "," << b << ") = " << lcm(a, b);

    return 0;
}