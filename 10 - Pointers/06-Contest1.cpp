/*
Given an integer array arr[], and another integer, x, find and return x's position in the array or -1 if it is not present
*/

#include <iostream> 

int search(int* a, int target, int s);

int main() {
    int arr[5] = {0, 1, 2, 4, 6};
    int num;
    int pos;
    int size = sizeof(arr)/sizeof(arr[0]);

    //getting target from user
    std::cout << "Enter the number you'd like to find in the array: ";
    std::cin >> num;

    //calling search()
    pos = search(arr, num, size);

    //informing the user of presence/positon
    if (pos == -1) {
        std::cout << num << " is not in the array";
    } else {
        std::cout << num << " is in position " << pos;
    }

    return 0;
}

int search(int* a, int target, int s) {
    int p = -1;

    for (int i=0; i<s; i++) {

        if (a[i] == target) {
            p = i;
            return p;
        }
    }

    return p;
}