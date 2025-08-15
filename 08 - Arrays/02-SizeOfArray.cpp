/*
Given an array, arr[], find the size of the array
*/

#include <iostream>

int main() {
    int arr[3];

    std::cout << (sizeof(arr) / sizeof(arr[0]));

    return 0;
}