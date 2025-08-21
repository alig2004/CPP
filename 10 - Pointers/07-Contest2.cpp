/*
Given an array, arr[], modify it's values so that each is the product of itself and the next OR'd using bitwise OR
    e.g. arr[0] = arr[0] | arr[1]
         arr[1] = arr[1] | arr[2]
*/

#include <iostream>

int main() {
    int arr[5] = {10, 11, 1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< (size-1); i++) {
        arr[i] = arr[i] | arr[i+1];
    }

    for (int i=0; i<size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}