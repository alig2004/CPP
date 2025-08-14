/*
Given two integers, a and b, pass them into a function called argumentFunction(), which should return a+b
*/

#include <iostream>

int argumentFunction(int a, int b);

int main() {
    int a, b;

    //getting a and b from user
    std::cout << "Please enter two integers: \n";
    std::cin >> a;
    std::cin >> b;

    //calling argumentFunction()
    std::cout << argumentFunction(a, b);

    return 0;
}

int argumentFunction(int a, int b) {
    return (a+b);
}