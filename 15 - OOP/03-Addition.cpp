/*
Design a class as described below:
    Class Name: Addition
    Method: int add(int a, int b)
        - Should be public and static
        - Returns the sum of the values passed in
*/

#include <iostream>

class Addition {
    public:
        static int add(int a, int b) {
            return a+b;
        }
};

int main() {
    Addition add1;
    int x, y;

    std::cin >> x;
    std::cin >> y;

    std::cout << add1.add(x, y);

    return 0;
}