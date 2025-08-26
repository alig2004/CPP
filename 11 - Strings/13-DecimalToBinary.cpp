/*
Given a positive decimal number, n, convert it to binary and store the binary in a string
*/

#include <iostream>
#include <algorithm>

std::string decimalToBinary(int dec);

int main() {
    int n;
    std::string binary;

    //getting n from user
    std::cout << "Enter a positive number: ";
    std::cin >> n;

    //calling decimalToBinary()
    binary = decimalToBinary(n);

    //outputting binary
    std::cout << n << " = " << binary;

    return 0;
}

std::string decimalToBinary(int dec) {
    std::string bin = "";

    while (dec > 0) {
        int remainder = dec%2;
        bin += std::to_string(remainder);
        dec /= 2;
    }

    std::reverse(bin.begin(), bin.end());

    return bin;
}