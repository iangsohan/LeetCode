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

//Cached s.length() so it's not called repeatedly
//Took advantage of c++ for loop syntax to not let j be valid elsewhere/simplify
bool isPalindrome(int x) {
    string s = to_string(x);
    for (int i = 0, j = s.length()-1; i < s.length() / 2; i++, j--) {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

//Used Standard library to make code readable (uses more memory and slower)
bool isPalindrome(int x) {
    string num = to_string(x);
    string reversedNum{ num };
    reverse(num.begin(), num.end());
    return num == reversedNum;
}