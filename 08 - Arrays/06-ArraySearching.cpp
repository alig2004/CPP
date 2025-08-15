/*
Given an unsorted integer array, arr[], search the array to check for the presence of integer x. If x is in the array, return its index. If x is not in the array, return -1
*/

#include <iostream>

int search(int a[], int x, int size);

int main() {
    int arr[10] = {1, 53, 52, 6, 7, 32, 5, 3, 7, 104};
    int x;
    int found;
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Enter the number to search for: ";
    std::cin >> x;

    found = search(arr, x, size);

    if (found == -1) {
        std::cout << "Number not found";
    } else {
        std::cout << "Found in position " << found;
    }

    return 0;
}

int search(int a[], int x, int s) {
    int position = -1;

    for (int i=0; i<s; i++) {
        if (a[i] == x) {
            position = i;
            return position;
        }
    }

    return position;
}