/*  LeetCode: "Divide Two Integers"
    - Given two integers, divide them without using multiplication, division and mod operator.
    - Assume the operation is valid.
    - Assume INT_MAX is returned in overflow.   */

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == 0) return 0;
    long count = exp(log(fabs(dividend))-log(fabs(divisor)));
    count = ((dividend < 0)^(divisor < 0)) ? 0 - count : count;
    if (count > INT_MAX)
        count = INT_MAX;
    return count;
}