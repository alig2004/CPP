/*
Take the input of a string that is comprised of multiple words
*/

#include <iostream>

int main() {
    std::string s;

    //getting s from user
    std::cout << "Enter a sentence:\n";
    getline(std::cin, s);

    //outputting s
    std::cout << "\n\n" << s;

    return 0;
}