/*
Given a string, s, slice it so that the output is a substring that contains all the characters except the first and last
*/

#include <iostream>

std::string sliceString(std::string &str);

int main() {
    std::string s;

    //getting s from user, repeating until 
    std::cout << "Enter a string:\n";
    do {
        getline(std::cin, s);

        if (s.length() > 2) {
            break;
        }

        std::cout << "String must have 3 or more characters, enter another string:\n";
    } while (1);

    //outputting result from sliceString()
    std::cout << sliceString(s);

    return 0;
}

std::string sliceString(std::string &str) {
    std::string result;

    result = str.substr(1, str.length() - 2);

    return result;
}