/*
Create a class called minElement, which will include:
    - A private variable, y
    - A constructor to set the value of y
    - A method, check(), which would take a parameter, x, and print the smaller variable between x and y
*/

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
