/*	LeetCode: "Reverse Integer"
	- Given a 32-bit signed integer, reverse digits of an integer.	*/

#include<iostream>
using namespace std;

int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int i = x % 10;
        x /= 10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && i > 7)) {
            return 0;
        }
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && i < -8)) {
            return 0;
        }
        ans = ans * 10 + i;
    }
    return ans;
}

//use long to hold value
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

//This is what I would give
int reverse(int x) {
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
}