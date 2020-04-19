/*	LeetCode: "Palindrome Number"
	- Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.	*/

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(int x) {
    string s = to_string(x);
    int j = s.length() - 1;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] == s[j]) {
            j--;
        } else {
            return false;
        }
    }
    return true;
}