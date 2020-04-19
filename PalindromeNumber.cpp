/*	LeetCode: "Palindrome Number"
	- Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.	*/

#include<iostream>
#include<string>
using namespace std;

// uses less memory, runs faster, less readable
bool isPalindrome(int x) {
    string s = to_string(x);
    for (int i = 0, j = s.length() - 1; i < s.length() / 2; i++, j--) {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

// uses more memory, runs slower, more readable
bool isPalindrome(int x) {
    string num = to_string(x);
    string reversedNum{ num };
    reverse(num.begin(), num.end());
    return num == reversedNum;
}