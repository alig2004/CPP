/*
Create a function called sum() which can take two to four parameters and returns the sum of all parameters
*/

#include <iostream>

int sum(int a, int b, int c=0, int d=0);


int main() {
    int w, x, y, z;

    //getting inputs from user
    std::cout << "Enter 4 numbers:\n";
    std::cin >> w;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    //calling sum() with different amounts of parameters passed in
    std::cout << w << "+" << x << "=" << sum(w, x) << std::endl;
    std::cout << w << "+" << x << "+" << y << "=" << sum(w, x, y) << std::endl;
    std::cout << w << "+" << x << "+" << y << "+" << z << "=" << sum(w, x, y, z) << std::endl;

    return 0;
}

int sum(int a, int b, int c, int d) {
    return (a+b+c+d);
}