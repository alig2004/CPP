/*
Given an integer array, arr[], calculate and return the product of all the elements of the array modulo a given number, m
    (Contest3.cpp is clearer wording of original question and desired solution, Contest3Alt.cpp is my interpretation of original question and it's solution)
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
    int result = 0;

    for (int i=0; i<s; i++) {
        p = (p * a[i]);
    }

    result = p%m;

    return result;
}