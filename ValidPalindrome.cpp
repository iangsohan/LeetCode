/*  LeetCode: "Valid Palindrome"
    - Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases. */

#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(string s) {
    string copy = "";
    for(char c : s){
        if(isalnum(c))
            copy += tolower(c);
    }
    string reversed = copy;
    reverse(reversed.begin(), reversed.end());
    return copy == reversed;
}