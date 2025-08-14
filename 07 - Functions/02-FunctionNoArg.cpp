/*
Write a function called helloFunction() with no input that prints "Hello"
*/

#include <iostream>

void helloFunction(void);

int main() {
    //calling helloFunction
    helloFunction();

    return 0;
}

void helloFunction(void) {
    std::cout << "Hello" << std::endl;
    
    return;
}