/*	LeetCode: "Roman to Integer"
	- Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.	*/

#include<iostream>
using namespace std;

int romanToInt(string s) {
    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            ans++;
            tmp = 1;
        } else if (s[i] == 'V') {
            ans += 5;
            if (tmp < 5) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = 5;
        } else if (s[i] == 'X') {
            ans += 10;
            if (tmp < 10) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = 10;
        } else if (s[i] == 'L') {
            ans += 50;
            if (tmp < 50) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = 50;
        } else if (s[i] == 'C') {
            ans += 100;
            if (tmp < 100) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = 100;
        } else if (s[i] == 'D') {
            ans += 500;
            if (tmp < 500) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = 500;
        } else if (s[i] == 'M') {
            ans += 1000;
            if (tmp < 1000) {
                ans -= tmp * 2;
                tmp = 0;
            }
            tmp = 1000;
        }
    }
    return ans;
}