/*
Given a string, s, find the length of the string and output it
*/

#include <iostream>

int main() {
    std::string str;

    //getting string from user
    std::cout << "Enter a string:\n";
    getline(std::cin, str);

    //outputting the length
    std::cout << str.length();

    return 0;
}