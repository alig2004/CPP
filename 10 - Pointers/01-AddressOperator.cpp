/*
Given a variable, a, print a using a pointer and dereferencing
*/

#include <iostream>

int main() {
    int a = 5;

    //creating a pointer to a
    int *address = &a;

    std::cout << *address;

    return 0;
}