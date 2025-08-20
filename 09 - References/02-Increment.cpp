/*
Given a variable, a, create a function called updateVar() to increment a by 10 without returning anything
*/

#include <iostream>

void updateVar(int &x);

int main() {
    int a;

    //getting value of a from user
    std::cout << "Enter an integer: ";
    std::cin >> a;

    //calling updateVar()
    updateVar(a);

    //outputting a
    std::cout << a;

    return 0;
}

void updateVar(int &x) {
    x = x + 10;
}