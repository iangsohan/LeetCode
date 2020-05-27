/*  LeetCode: "Add Strings"
    - Given two non-negative integers represented as string, return the sum.    */

#include <iostream>
using namespace std;

string addStrings(string num1, string num2) {
    int sum = 0, len1 = num1.length()-1, len2 = num2.length()-1;
    string ans;
    while (len1 >= 0 || len2 >= 0 || sum > 0) {
        if (len1 >= 0)
            sum += (num1[len1--]-'0');
        if (len2 >= 0)
            sum += (num2[len2--]-'0');
        ans.insert(ans.begin(), (sum % 10) + '0');
        sum /= 10;
    }
    return ans;
}