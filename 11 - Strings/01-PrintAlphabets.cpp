/*
Given  two char variables, c1 and c2, print all characters from c1 to c2 in a single line on a single line
*/

#include <iostream>

int main() {
    char c1, c2;

    //getting c1 and c2 from user
    std::cout << "Enter two characters:\n";
    std::cin >> c1;
    std::cin >> c2;

    //swapping c1 and c2 if c1 is bigger
    if (c1 > c2) {
        int temp = c1;
        c1 = c2;
        c2 = temp;
    }

    //printing out each letter from c1 to c2
    while (c1 <= c2) {
        std::cout << c1 << " ";

        c1++;
    }

    return 0;
}