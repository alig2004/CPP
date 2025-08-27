/*
Given a string, s, find if it is a pangram or not (i.e. contains each letter of the alphabet at least once)
*/

#include <iostream>

bool isPangram(std::string s);

int main() {
    std::string s;

    //getting string from user
    std::cout << "Enter a string:\n";
    getline(std::cin, s);

    std::cout << (isPangram(s) ? "Pangram" : "Not a pangram");
}

bool isPangram(std::string s) {
    int size = s.length();

    //check the length of the string is at least 26 letters
    if (size < 26) {

        //if less than 26, return false as it can't be a pangram 
        return false;
    }

    //create an array to check for each letters presence
    bool visited[26] = {false};

    //traverse the string to mark letters presence in visited[]
    for (int i=0; i<size; i++) {
        char x = s[i];

        //check for if x is a lowercase letter
        if ( (x >= 'a') && (x <= 'z') ) {

            //mark that letters space in visted as true
            visited[x - 'a'] = true;
        } 
        //check for if x is an uppercase letter
        else if ( (x >= 'A') && (x <= 'Z') ) {

            //mark that letters space in visted as true
            visited[x - 'A'] = true;
        }
    }

    //check to see if all letters have been marked in visited[]
    for (int i=0; i<26; i++) {

        //if a letter is missing, return false as it is not a pangram
        if (visited[i] == false) {
            return false;
        }
    }

    return true;
}