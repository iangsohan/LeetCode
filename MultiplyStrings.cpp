/*  LeetCode: "Multiply Strings"
    - Given two non-negative integers represented as strings, return the product.   */

#include <iostream>
using namespace std;

string multiply(string num1, string num2) {
    int len1 = num1.size(), len2 = num2.size();
    string ans(len1 + len2, '0');
    for (int i = len1-1; i > -1; i--) {
        for (int j = len2-1; j > -1; j--) {
            int sum = (num1[i]-'0') * (num2[j]-'0') + (ans[i + j + 1]-'0');
            ans[i + j + 1] = (sum % 10)+'0';
            ans[i + j] += sum / 10;
        }
    }
    ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
    return ans;
}