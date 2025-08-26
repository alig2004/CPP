/*
Given a string, s, determine if it is a palindrome
*/

#include <iostream>

void palindrome(std::string s);

int main() {
    std::string s;

    //getting string from user
    std::cout << "Enter a word:\n";
    std::cin >> s;

    //calling palindrome()
    palindrome(s);

    return 0;
}

void palindrome(std::string s) {
    int start = 0;
    int end = s.length() -1;

    //while start and end are on left and right respectively
    while (start < end) {

        //if the letter at position start and position end aren't the same
        if (s[start] != s[end]) {
            
            //inform the user that it isn't a palindrome
            std::cout << s << " is not a palindrome";
            return;
        }

        //incrementing start and decrementing end
        start++;
        end--;
    }

    //if loop completes, the string is a palindrome
    std::cout << s << " is a palindrome";

    return;
}