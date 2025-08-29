/*
Given two complex numbers, write a struct and function to add them together 
*/

#include <iostream>

struct Complex {
    int real;
    int imaginary;
};

Complex add(Complex c1, Complex c2);

int main() {
    Complex c1, c2;

    //getting c1 from user
    std::cout << "Enter the real and imaginary aspects of the first imaginary number:\n";
    std::cout << "Real: ";
    std::cin >> c1.real;
    std::cout << "Imaginary: ";
    std::cin >> c1.imaginary;

    //getting c2 from user
    std::cout << "Enter the real and imaginary aspects of the second imaginary number:\n";
    std::cout << "Real: ";
    std::cin >> c2.real;
    std::cout << "Imaginary: ";
    std::cin >> c2.imaginary;

    //calling add and storing result in c3
    Complex c3 = add(c1, c2);

    //outputting full addition
    std::cout << "(" << c1.real << " + " << c1.imaginary << "i) + (" << c2.real << " + " << c2.imaginary << "i) = (" << c3.real << " + " << c3.imaginary << "i)";
}

Complex add(Complex c1, Complex c2) {
    Complex c3;

    c3.real = c1.real + c2.real;

    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;
}