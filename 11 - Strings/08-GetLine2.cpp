/*
Take in a string input of a email, storing up to the @ symbol
*/

#include <iostream>

int main() {
    std::string s;

    //getting s from user
    std::cout << "Please enter your email: ";
    getline(std::cin, s, '@');

    //outputting s
    std::cout << "\n\n" << s;

    return 0;
}