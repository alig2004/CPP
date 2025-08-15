/*
Given an integer array, arr[], print the elements of the array in a single line
*/

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int x : arr) {
        std::cout << x << " ";
    }

    return 0;
}