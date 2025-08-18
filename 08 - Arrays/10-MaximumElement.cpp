/*
Given an integer array, arr[], find the largest element and display it
*/

#include <iostream>

int max(int* a, int s);

int main() {
    int size = 5;
    int arr[size];

    //getting elements from user
    std::cout << "Enter " << size << " integers:\n";
    for (int i=0; i<size; i++) {
        std::cin >> arr[i];
    }

    //displaying largest element
    std::cout << "\nThe largest element is " << max(arr, size);

    return 0;
}

int max(int* a, int s) {
    int max = a[0];

    //looping through array from second element onwards
    for (int i=1; i<s; i++) {

        //if current element is greater than max, assign it to max
        if (a[i] > max) {
            max = a[i];
        }

    }

    return max;
}