/*
Given an array with an even number of elements, arr[], each consecutive pair should represent height in feet and inches respectively.
Find the maximum height, where the height is calculated by converting feet to inches and adding the pair together.
*/

#include <iostream>

struct Height {
    int feet;
    int inches;
};

int findMax(Height* arr, int s);

int main() {
    int size = 3;
    Height arr[size];

    //getting heights from user
    std::cout << "Enter heights as integers representing feet and inches:";
    for (int i=0; i<size; i++) {
        std::cout << "\nFeet: ";
        std::cin >> arr[i].feet;
        std::cout << "Inches: ";
        std::cin >> arr[i].inches;
    }

    std::cout << "Tallest is " << findMax(arr, size) << "in";

    return 0;
}

int findMax(Height* arr, int s) {
    int max;

    //set max to first element in the array
    max = (arr[0].feet*12) + arr[0].inches;

    //loop through array
    for (int i=1; i<s; i++) {

        //if current element is greater than max, set max to its value
        if ((arr[i].feet*12) + arr[i].inches > max) {
            max = (arr[i].feet*12) + arr[i].inches;
        }

    }

    return max;
}