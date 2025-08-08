/*
Take in 2 operands, x and y, and a number representing an operator, op. Output the result of the operation using the following:
    op == 1 -> Addition
    op == 2 -> Subtraction
    op == 3 -> Multiplication
Any other input for operand should output "Invalid Input"
*/

#include <iostream>
using namespace std;

int main() {
    int x, y, op;

    //Getting the operators
    cout << "Enter two integers:\n";
    cin >> x;
    cin >> y;

    //Outputting the menu
    cout << "Enter a number for the operation you'd like to perform:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n";
    cout << "Enter your operation: ";
    cin >> op;

    switch (op) {
        case 1:
            cout << x << " + " << y << " = " << x+y;
            break;
        case 2:
            cout << x << " - " << y << " = " << x-y;
            break;
        case 3:
            cout << x << " x " << y << " = " << x*y;
            break;
        default:
            cout << "Invalid Input";
    }

    return 0;
}