/*  LeetCode: "Excel Sheet Column Number"
    - Given a column title as appear in an Excel sheet, return its corresponding column number. */

#include<iostream>
#include<math.h>
using namespace std;

int titleToNumber(string s) {
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        ans += (pow(26, s.length()-i-1)*(s.at(i)-'A'+1));
    }
    return ans;
}