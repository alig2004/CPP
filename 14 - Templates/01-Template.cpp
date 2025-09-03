/*
Create a class called minElement, which will include:
    - A private variable, y
    - A constructor to set the value of y
    - A method, check(), which would take a parameter, x, and print the smaller variable between x and y
*/

#include <iostream>

template <class T>
    class minElement {
        //private variable, y
        T y; 

        public:
            //default constructor
            minElement(){};

            //parameterized constructor
            minElement(T a){
                y = a;
            }

            //method to check and output the minimum of two elements
            void check(T x)
            {
                std::cout << (y<x ? y : x) << std::endl;
            }   
    };


int main() {

    //creating an object of minElement, wherein y is an integer
    minElement<int> first(5);

    //calling the check() method in minElement, passing in 3
    first.check(3);

    //creating an object of minElement, wherein y is a string
    minElement<std::string> second("abc");

    //calling the check() method in minElement, passing in 3
    second.check("abcd");

    return 0;
}