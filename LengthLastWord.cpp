/*	LeetCode: "Length of Last Word"
	- Given a string s,	returns  length of last word in the string.
*/

#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) {
    if (s.length() == 0) return 0;
    while (s.at(s.length() - 1) == ' ' && s.length() > 1) s.pop_back();
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == ' ') return i;
    }
    return s.length();
}