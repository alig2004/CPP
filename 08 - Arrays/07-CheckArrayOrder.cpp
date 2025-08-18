/*
Given an array, arr[], check whether it is sorted and return true if it is, false if it isn't
*/

#include <iostream>

bool checkOrder(int* a, int s);

int main() {
    int size = 5;
    int arr[size];

    //populating the array with user inputs
    std::cout << "Enter " << size << " numbers:\n";
    for (int i=0; i<size; i++) {
        std::cin >> arr[i];
    }

    //outputting whether it is sorted or not based on the result checkOrder()
    if (checkOrder(arr, size)) {
        std::cout << "This array is sorted";
    } else {
        std::cout << "This array is unsorted";
    }

    return 0;
}

//function to check if an array is sorted
bool checkOrder(int* a, int s) {

    //iterating through the array from second element onwards
    for (int i=1; i<s; i++) {

        //checking if the current element is less than the previous
        if (a[i] < a[i-1]) {

            //returning false if this is true, as it means the array is unsorted
            return false; 
        }
    }

    return true;
}