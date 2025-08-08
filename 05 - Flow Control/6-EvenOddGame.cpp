/*
Given a bag of n apples, you and a friend take turns picking an apple from the bag. The first turn is always yours. The player to pick the last apple is the winner.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    //Getting the number of apples from the user
    cout << "How many apples are in the bag?\n";
    cin >> n;

    cout << "The winner is ";

    //if the number of apples is divisible by 2, your friend wins
    if (n%2 == 0) {
        cout << "Friend";
    } else { //else, you win
        cout << "You";
    }

    return 0;
}