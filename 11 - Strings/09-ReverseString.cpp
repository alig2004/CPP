/*
Given a string s, reverse it and output the reversed string
*/

#include <iostream>

std::string reverseString(std::string s);

int main() {
    std::string s, reverse;

    //getting s from user
    std::cout << "Enter a string:\n";
    getline(std::cin, s);

    //calling reverseString()
    reverse = reverseString(s);

    //outputting the reversed string
    std::cout << reverse;

    return 0;
}


std::string reverseString(std::string s) {
    std::string reverse = "";

    for (int i=s.length()-1; i>=0; i--) {
        reverse += s[i];
    }

    return reverse;
}