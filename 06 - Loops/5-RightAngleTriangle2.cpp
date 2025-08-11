/*
Given an integer, n, print the perimeter of a triangle where the length of the height and base are n
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    //getting n from user
    cout << "Please enter a number: ";
    cin >> n;


    //outer loop, where i is the number of rows
    for (int i = 1; i <= n; i++) {

        //inner loop, where j is the number of columns
        for (int j = 1; j <= i; j++) {

            //printing
            if (i != n) { //if not the last line

                if ((j==1) || (j==i)) { //if its the first or last column, print *

                    cout << "* ";

                } else { //if its the interior of the triangle, print a space

                    cout << "  ";
                }

            } else { //if it is the last line, print whole line

                cout << "* ";

            }
            
        }

        //moving onto a new line for the next row
        cout << endl;
    }

    return 0;
}