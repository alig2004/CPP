/*
Write a program that takes in two integers, a and b, reverses the digits and swaps them. Use referencing
*/

#include <iostream>
#include <string>

void reverseDigits(int &a);
void swapNumbers(int &a, int &b);


int main() {
    int a, b;

    //getting values from user
    std::cout << "Enter two integers:\n";
    std::cin >> a;
    std::cin >> b;

    std::cout << "\na = " << a;
    std::cout << "\nb = " << b;
    std::cout << "\nPerforming reverse and swap...";

    //reversing the digit order on both digits
    reverseDigits(a);
    reverseDigits(b);

    //swapping the digits
    swapNumbers(a, b);

    //displaying new variables to user
    std::cout << "\n\nReverse and swap performed...";
    std::cout << "\na = " << a;
    std::cout << "\nb = " << b;

    return 0;
}


//function to the reverse the digits of an integer
void reverseDigits(int &a) {
    int x = a;
    int n = 0;
    
    //looping until b has no digits left
    while (x>0) {

        //getting the rightmost digit of x
        int dig = x%10;

        //multiplying n by 10 to move all digits left a space
        n *= 10;

        //adding digit from x onto the end of n
        n += dig;

        //removing rightmost digit of b
        x /= 10;
    }

    //converting s to an integer and replacing the current value of the integer passed in
    a = n;
}

//function to swap the values of two integers
void swapNumbers(int &a, int &b) {
    int temp = a;

    a = b;
    b = temp;
}