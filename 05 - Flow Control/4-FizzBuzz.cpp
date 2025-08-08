/*
Given a integer, a, print according to the following:
    If the number is divisible by 3, print "Fizz"
    If the number is divisible by 5, print "Buzz"
    If the number is divisible by 3 and 5, print "FizzBuzz"
    In any other case, print the number
*/

#include <iostream>
using namespace std;

int main() {
    int a;

    //getting the number from the user
    cout << "Enter an integer: ";
    cin >> a;

    //if divisible by 3...
    if (a%3 == 0) {
        //print "Fizz"
        cout << "Fizz";

        //if also divisible by 5...
        if (a%5 == 0) {
            //print "Buzz"
            cout << "Buzz";

        }

    } else if (a%5 == 0) { //if not divisible by 3 but divisible by 5...
        //print "Buzz"
        cout << "Buzz";

    } else { //if not divisible by either
        //print the number
        cout << a;

    }

    return 0;

}