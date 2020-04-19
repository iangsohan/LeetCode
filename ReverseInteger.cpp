/*	LeetCode: "Reverse Integer"
	- Given a 32-bit signed integer, reverse digits of an integer.	*/

#include<iostream>
using namespace std;

int reverse(int x) {
    long rev = 0;
    while (x != 0) {
        int back = x % 10;
        x /= 10;
        rev = rev * 10 + back;
    }
    if (rev < INT_MIN || rev > INT_MAX)
        return 0;
    return rev;
}

// uses reverse command
int reverse(int x) {
    string s = to_string(x);
    if (s[0] == '-')
        ::reverse(s.begin() + 1, s.end());
    else
        ::reverse(s.begin(), s.end());
    long rev = stol(s);
    if (rev < INT_MIN || rev > INT_MAX)
        return 0;
    return rev;
}