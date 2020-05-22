/*  LeetCode: "Subtract the Product and Sum of Digits of an Integer"
    - Given an integer number n, return the difference between the product of its digits and the sum of its digits. */

#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    if (!n)
        return 0;
    int product = 1, sum = 0;
    string digits = to_string(n);
    for (int i = 0; i < digits.length(); i++) {
        product *= (digits[i] - '0');
        sum += (digits[i] - '0');
    }
    return product - sum;
}