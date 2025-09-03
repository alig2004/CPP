/*
Sort elements in an array of size n, where the array can be any of the following types:
    - Integer
    - String
    - Float
*/

#include <iostream>

template <typename T>
void sortArray(T a[], int n) {

    //insertion sort
    for (int i=1; i<n; ++i) {
        T key = a[i];
        int j = i-1;

        while (j>=0 && a[j]>key) {
            a[j+1] = a[j];
            j = j-1;
        }

        a[j+1] = key;
    }
}

template <typename T>
void printArray(T a[], int n) {
    
    //loop through array
    for (int i=0; i<n; i++) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;
}

int main() {
    int arr1[5] = {1, 6, 3, 25, 6};
    float arr2[10] = {5, 1, 54, 7, 64, 26, 85, 23, 0, 9};
    std::string arr3[3] = {"ab", "xy", "bc"};

    //sorting and displaying the integer array
    sortArray<int>(arr1, 5);
    printArray<int>(arr1, 5);

    //sorting and displaying the float array
    sortArray<float>(arr2, 10);
    printArray<float>(arr2, 10);

    //sorting and displaying the string array
    sortArray<std::string>(arr3, 3);
    printArray<std::string>(arr3, 3);

    return 0;
}