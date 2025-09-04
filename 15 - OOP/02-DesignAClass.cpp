/*
Design a class as described below:
    Class Name: MyClass
    Method: void display()
        - Should be public and print "Hello World"
*/

#include <iostream>

class MyClass {
    public: 
        void display() {
            std::cout << "Hello World";
        }
};

int main() {
    MyClass mc;

    mc.display();

    return 0;
}