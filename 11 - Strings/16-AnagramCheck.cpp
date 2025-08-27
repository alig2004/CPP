/*
Given two strings consisting of lowercase letters, s1 and s2, check if s1 and s2 are anagrams of each other (i.e. they have the same characters with the same frequencies)
*/

#include <iostream>

bool isAnagram(std::string s1, std::string s2);


int main() {
    std::string s1, s2;

    //get strings from user
    std::cout << "Enter two words:\n";
    std::cin >> s1;
    std::cin >> s2;

    std::cout << (isAnagram(s1, s2) ? "Anagram" : "Not an anagram");
 
    return 0;
}


bool isAnagram(std::string s1, std::string s2) {
    int size1 = s1.length();
    int size2 = s2.length();

    //if the lengths of the strings aren't the same, the strings cannot be anagrams
    if (size1 != size2) {
        return false;
    }

    //create an array for each lowercase letter
    int freq[26] = {0};

    //for each letter in s1, increment it's corresponding spot in freq[]
    for (int i=0; i<size1; i++) {
        freq[s1[i] - 'a']++;
    }

    //for each letter in s2, decrement it's corresponding spot in freq[]
    for (int i=0; i<size2; i++) {
        freq[s2[i] - 'a']--;
    }

    //traverse freq[] and if any entry is not 0, return false
    for (int i=0; i<26; i++) {
        
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}