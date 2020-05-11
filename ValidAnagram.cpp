/*  LeetCode: "Valid Anagram"
    - Given two strings s and t , write a function to determine if t is an anagram of s.    */

#include<iostream>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}