/*
Given a string containing multiple words separated by a space, s, write a program to count the total number of words in the string (assuming the final character is not a space)
*/

#include <iostream>

int countWords(std::string &str);

int main() {
    std::string s;

    //getting string from user
    std::cout << "Enter a string:\n";
    getline(std::cin, s);

    //outputting the result of countWords()
    std::cout << countWords(s) << " words";

    return 0;
}

int countWords(std::string &str) {

    //setting count to 1 to account for no spaces (1 word) or word at the end (multiple words)
    int count = 1;

    //looping through the characters in the string
    for (int i=0; i<str.length(); i++) {

        //if a space is found, increment count to reflect having started a new word
        if (str[i] == ' ') {
            count++;
        }
    }

    return count;
}