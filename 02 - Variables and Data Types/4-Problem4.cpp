/*
Given int a, float b, and long c, initialise an auto variable called ans containing the sum of these variables
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    long c;
    cin >> a >> b >> c;

    // add these variables into ans variable
    auto ans = a + b + c;

    // printing the ans
    cout << ans << endl;
    return 0;
}