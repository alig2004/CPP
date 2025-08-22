/*
Given two strings, txt and pat, return the index of the first occurrence of substring pat in txt. If pat is not found, return -1
*/

#include <iostream>

int substring(std::string& txt, std::string& pat);

int main() {
    std::string pat = "He Hell World Hello";
    std::string txt = "Hell";
    int pos;

    //storing position found from substring() in pos
    pos = substring(pat, txt);

    //if pos is equal to -1, pat is not within txt
    if (pos == -1) {
        std::cout << "Not present";
    } else {
        std::cout << "Present at position " << pos;
    }

    return 0;
}

int substring(std::string& txt, std::string& pat) {
    int sizeT = txt.length();
    int sizeP = pat.length();

    //looping through txt
    for (int i=0; i<sizeT; i++) {

        //if first character of pat is found in txt
        if (pat[0] == txt[i]) {

            //if pat only one character long, return i as it is found
            if (sizeP == 1) {
                return i;
            }

            //otherwise, check for each subsequent letter
            for (int j = 1; j<sizeP; j++) {

                //if a non-match is found, break from this loop and continue searching
                if (pat[j] != txt[i+j]) {
                    break;
                }

                //if the last letter of pat was checked and loop not broken, return index to prevent further searching
                if (j == sizeP-1) {
                    return i;
                }
            }
        }
    }

    //returning -1 if nothing was previously returned (i.e. pat not present in txt)
    return -1;
}