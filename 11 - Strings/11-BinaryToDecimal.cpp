/*
Given a string, bin, representing a binary number, find and output its decimal equivalent
*/

#include <iostream>

int binaryToDecimal(std::string s);

int main() {
    std::string bin;
    int dec;

    //getting b from user
    std::cout << "Enter a binary number (do not include spaces):\n";
    std::cin >> bin;

    //calling binaryToDecimal()
    dec = binaryToDecimal(bin);

    //outputting dec
    std::cout << bin << " = " << dec;

    return 0;
}

int binaryToDecimal(std::string s) {
    int dec = 0;
    int power = 1;
    int size = s.length();

    for (int i=size-1; i>=0; i--) {
        int num = (int)(s[i] - '0'); //storing the integer version of the current character in num
        dec += num*power; 
        power *= 2;
    }

    return dec;
}