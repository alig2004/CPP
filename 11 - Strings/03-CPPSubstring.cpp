/*
Given a string, s, and two integers, L and R, print the characters in the string from position L to position R
*/

#include <iostream>

std::string substring(std::string &s, int L, int R);

int main() {
    std::string str;
    int l, r;

    //getting string from user
    std::cout << "Enter a string:\n";
    getline(std::cin, str);

    //getting l and r from user
    std::cout << "\nEnter two integers:\n";
    std::cin >> l;
    std::cin >> r;

    //if left is greater than right, swap them
    if (l > r) {
        int temp = l;
        l = r;
        r = temp;
    }

    std::cout << "\n" << substring(str, l, r);


    return 0;
}

std::string substring(std::string &s, int L, int R) {
    std::string result = "";

    for (int i=L; i<=R && i<s.length(); i++) {
        result += s[i];
    }

    return result;
}