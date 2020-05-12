/*  LeetCode: "Longest Substring Without Repeating Characters"
    - Given a string, find the length of the longest substring without repeating characters.    */

#include<iostream>
#include<unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int max = 0;
    unordered_set<char> charSet;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            if (charSet.count(s[j]) == 0) charSet.insert(s[j]);
            else {
                if (charSet.size() > max) max = charSet.size();
                charSet.clear();
                break;
            }
        }
    }
    if (charSet.size() > max) max = charSet.size();
    return max;
}