/*
Given an integer array, arr[], print its elements in reverse
*/

#include <iostream>

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i=size-1; i >= 0; i--){
        std::cout << arr[i] << " ";
    }

    return 0;
}