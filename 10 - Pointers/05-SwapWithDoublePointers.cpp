/*
Using double pointers, swap the values of two integers, a and b
*/

#include <iostream>

void swap(int **c, int **d);

int main() {
    int a, b;
    int *x, *y;
    int **l, **m;

    //point x and y to a and b respectively
    x = &a;
    y = &b;

    //pointing l and m to x and y respectively
    l = &x;
    m = &y;

    //getting values of a and b from user
    std::cout << "Enter two integers:\n";
    std::cin >> a;
    std::cin >> b;

    //outputting current values
    std::cout << "\na = " << a << " b = " << b;

    //swapping values
    swap(l, m);

    //outputting new values
    std::cout << "\na = " << a << " b = " << b;
}


void swap(int **c, int **d) {
    int temp = **c;

    **c = **d;
    **d = temp; 
}