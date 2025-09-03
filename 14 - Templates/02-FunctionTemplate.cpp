/*
Given an array of size n, create a function template to find the largest element in the array
*/

#include <iostream>

template <typename T>
T largest(T arr[], int n) {

    //set largest to first element of arr[]
    T largest = arr[0];

    //loop through array
    for (int i=1; i<n; i++) {

        //if largest is less than the current element, assign the element to largest
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }

    //once loop is finished, return largest to main()
    return largest;
}

int main() {
    int arr1[5] = {1, 6, 3, 25, 6};
    float arr2[10] = {5, 1, 54, 7, 64, 26, 85, 23, 0, 9};

    std::cout << largest<int>(arr1, 5) << std::endl;
    std::cout << largest<float>(arr2, 10) << std::endl;

    return 0;
}