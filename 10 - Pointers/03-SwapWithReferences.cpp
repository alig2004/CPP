/*
Given two integers, a and b, swap their values using pass by reference
*/

#include <iostream>

void swap(int &x, int &y);

int main() {
    int a, b;

    //getting a and b from user
    std::cout << "Enter two integers:\n";
    std::cin >> a;
    std::cin >> b;

    //outputting current values
    std::cout << "\na = " << a << " b = " << b;

    //swapping values
    swap(a, b);

    //outputting new values
    std::cout << "\na = " << a << " b = " << b;

    return 0;
}


void swap(int &x, int &y) {
    int temp = x;

    x = y;
    y = temp;
}