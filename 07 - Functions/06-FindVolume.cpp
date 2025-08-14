/*
Using operator overloading, write two functions to find the volume of an object based off its dimensions. If only one parameter is passed, it is a cube, and if three parameters are passed, it is a cuboid
*/

#include <iostream>

int volume(int s);
int volume(int l, int w, int h);

int main() {
    int side, length, width, height;

    //getting side from user
    std::cout << "Enter the length of the cubes side: ";
    std::cin >> side;

    //displaying cubes volume
    std::cout << "Volume of cube is " << volume(side) << std::endl << std::endl;

    //getting length, width and height from user
    std::cout << "Enter the length, width and height of the cuboid:\n";
    std::cin >> length;
    std::cin >> width;
    std::cin >> height;

    //displaying cubes volume
    std::cout << "Volume of cuboid is " << volume(length, width, height) << std::endl << std::endl;
}

int volume(int s) {
    return (s*s*s);
}


int volume(int l, int w, int h) {
    return (l*w*h);
}