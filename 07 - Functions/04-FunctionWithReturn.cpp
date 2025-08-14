/*
Given an integer, n, write a function called returnValueFunction() that takes n and returns n*2
*/

#include <iostream>

int returnValueFunction(int n);

int main() {
    int num;

    //getting num from user
    std::cout << "Enter a number: ";
    std::cin >> num;

    //calling returnValueFunction()
    std::cout << returnValueFunction(num);

    return 0;
}

int returnValueFunction(int n) {
    return (n*2);
}