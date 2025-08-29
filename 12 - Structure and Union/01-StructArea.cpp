/*
Given a structure with side, length and width as data members, find the area of a 
square with side side and the area of a rectangle of length l and width w. 
*/

#include <iostream>

void findArea(int s, int l, int w);

struct Shape {
    int side;
    int length;
    int width;
};

int main() {
    int si, le, wi;

    //getting si, le and wi from user
    std::cout << "Enter 3 integers for side, length and width respectively:\n";
    std::cin >> si;
    std::cin >> le;
    std::cin >> wi;

    //calling findArea()
    findArea(si, le, wi);

    return 0;
}

void findArea(int s, int l, int w) {
    Shape sh;

    //assigning values to sh Shape
    sh.side = s;
    sh.length = l;
    sh.width = w;

    //outputting area of a square
    std::cout << "Square area = " << sh.side*sh.side;

    //outputting the area of a rectangle
    std::cout << "\nRectangle area = " << sh.length*sh.width;

    return;
}