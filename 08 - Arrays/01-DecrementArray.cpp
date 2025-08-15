/*
Given an integer array, arr[], decrement each element in the array and return it
*/

#include <iostream>

int* decrementArray(int arr[], int size);

int main() {
    int size = 5;
    int arr[size];
    int* dec;

    //entering integers into the array using user input
    std::cout << "Please enter " << size << " integers:\n";
    for (int i=0; i<size; i++) {
        std::cin >> arr[i];
    }

    //storing address of first element in dec pointer
    dec = decrementArray(arr, size);

    //displaying the decremented values using the dereference operator on dec
    for (int i=0; i<size; i++) {
        std::cout << *(dec+i);
    }

    return 0;
}

int* decrementArray(int arr[], int size) {
    
    //loop through array to decrement each element
    for (int i=0; i<size; i++) {
        arr[i]--;
    }

    return arr;
}