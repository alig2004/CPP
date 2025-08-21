/*
Given an integer array, arr[], calculate and return the product of all the elements of the array, each element modulo a given integer, m
*/

#include <iostream>

int product(int* a, int m, int s);

int main() {
    int arr[5] = {1, 3, 1, 2, 5};
    int mod = 100;
    int size = sizeof(arr)/sizeof(arr[0]);

    int prod = product(arr, mod, size);

    std::cout << prod;

    return 0;
}

int product(int* a, int m, int s) {
    int p = 1;

    for (int i=0; i<s; i++) {
        a[i] = a[i] % m;
        p = (p * a[i]) % m;
    }

    return p;
}