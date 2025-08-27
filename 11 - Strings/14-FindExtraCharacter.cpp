/*
given two strings, s1 and s2, of lengths n and n+1 respectively, find the extra character contained in s2 and display it
*/

#include <iostream>

char findExtra(std::string s1, std::string s2);


int main() {
    std::string s1 = "abcd";
    std::string s2 = "badce";
    char extra;

    extra = findExtra(s1, s2);

    std::cout << extra;

    return 0;
}


char findExtra(std::string s1, std::string s2) {
    char extra = 0;

    //XOR all characters in s1
    for (char c : s1) {
        extra ^= c;
    }

    //XOR all characters in s2
    for (char c : s2) {
        extra ^= c;
    }

    return extra;
}