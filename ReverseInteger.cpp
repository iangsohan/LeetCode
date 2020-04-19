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
        else if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && i < -8)) {
            return 0;
        }
        else {
            ans = ans * 10 + i;
        }
    }
    return ans;
}