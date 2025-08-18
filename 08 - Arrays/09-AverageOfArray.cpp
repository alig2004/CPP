/*
Given an integer array, arr[], return the floored average of all positive elements
*/

#include <iostream>

int average(int* a, int s);

int main() {
    int size = 10;
    int arr[size];

    //getting elements of array from user
    std::cout << "Enter " << size << " integers:\n";
    for (int i=0; i<size; i++) {
        std::cin >> arr[i];
    }

    //outputting the average of the positive integers
    std::cout << "\nThe average of the positive numbers in the array is " << average(arr, size);

    return 0;
}

int average(int* a, int s) {
    int sum = 0;
    int count = 0;
    double  avg = 0;

    //looping through array
    for (int i=0; i<s; i++) {

        //checking if the current element is positive
        if (a[i] >= 0) {

            //if it is, increment count and add elements value to sum
            count++;
            sum += a[i];
        }

    }

    //ensuring no division by 0
    if (count != 0) {
        avg = (double)sum/count;
    }

    return avg;
}