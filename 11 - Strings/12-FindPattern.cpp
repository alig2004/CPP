/*
Given a string, s, and a pattern, p, find if p exists within s, returning the starting index if it does and -1 if it does not. Both p and s are case-sensitive
*/

#include <iostream>

int findPattern(std::string text, std::string pattern);

int main() {
    std::string s, p;
    int pos;

    //getting s 
    std::cout << "Enter a string:\n";
    getline(std::cin, s);

    //getting p
    std::cout << "\nEnter the pattern you'd like to search for:\n";
    getline(std::cin, p);

    //checking if p exists within s
    pos = findPattern(s, p);

    //if pos equals -1, inform the user that the pattern is not within the string
    if (pos == -1) {

        std::cout << "\n\n\"" << p << "\" is not within \"" << s << "\"";

    } else { //else, inform the user of the patterns first occurrence
        std::cout << "\n\n\"" << p << "\" is within \"" << s << "\" at position " << pos;
    }

    return 0;
}

int findPattern(std::string text, std::string pattern) {
    int position = -1;

    position = text.find(pattern);

    return position;
}