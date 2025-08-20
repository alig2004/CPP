/*
Given a pointer to an integer, create a function called updateVar() which will increment the variable by 10 and return nothing
*/

#include <iostream>

void updateVar(int *p);

int main() {
    int a = 10;
    int *p;
    p = &a;

    //calling updateVar()
    updateVar(p);

    //outputting the new value of a
    std::cout << a;

    return 0;
}


void updateVar(int *p) {
    *p += 10;
}