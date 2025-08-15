/*
Given an integer array, arr[], populated only 1s or 0s, count the number of 0s in the array
*/

#include <iostream>

int main() {
    int arr[] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0};
    int count = 0;

    for (int x : arr) {
        if (x == 0) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}