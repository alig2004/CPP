/*
Given two numbers, x and y, where x>y, find the differences between their multiples from 1 to 10 and output them on a single line

e.g.
    x = 9, y = 4
    Output: 5 10 15 20 25 30 35 40 45 50

    Explanation:
      9 18 27 36 45 54 63 72 81 90
    - 4  9 12 16 20 24 28 32 36 40
    -----------------------------
    = 5 10 15 20 25 30 35 40 45 50
*/

#include <iostream>

int main() {
    int x,y;

    //getting x and y from user
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "Pleas enter another number: ";
    std::cin >> y;

    //swapping them if x<y
    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i=1; i<11; i++) {
        std::cout << (x*i) - (y*i) << " ";
    }

    return 0;
}