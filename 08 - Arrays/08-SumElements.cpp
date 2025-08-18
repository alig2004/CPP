/*
Given an integer array, use a function to sum its elements 
*/

#include <iostream>

int sumArray(int* a, int s);

int main() {
    int size = 5;
    int arr[size];

    //getting user inputs for array elements
    std::cout << "Enter " << size << " integers:\n";
    for (int i=0; i<size; i++) {
        std::cin >> arr[i];
    }

    //displaying the sum of the elements using sumArray()
    std::cout << "\nThe sum of all elements in the array is " << sumArray(arr, size);

    return 0;
}

int sumArray(int* a, int s) {
    int sum = 0;

    //looping through array and adding each elements value to sum
    for (int i=0; i<s; i++) {
        sum += a[i];
    }

    return sum;
}