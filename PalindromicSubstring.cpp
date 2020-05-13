/*  LeetCode: "Longest Palindromic Substring"
    - Given a string s, find the longest palindromic substring in s.    */

#include<iostream>
#include<string>
using namespace std;

string longestPalindrome(string s) {
    int start = 0, len = 0;
    for (int i = 0; i < s.length(); i++) {
        int j = i, k = i;
        while (k < s.length()-1 && s[k] == s[k+1]) k++;
        while (j > 0 && k < s.length()-1 && s[j-1] == s[k+1]) {
            k++, j--;
        }
        if (k-j+1 > len) {
            len = k-j+1;
            start = j;
        }
    }
    return s.substr(start, len);
}