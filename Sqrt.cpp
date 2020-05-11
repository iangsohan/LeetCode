/*  LeetCode: "Sqrt(x)"
    - Compute and return the integer square root of x, where x is guaranteed to be a non-negative integer.  */

#include<iostream>
using namespace std;

int mySqrt(int x) {
    long ans = 0;
    while (ans * ans <= x) ans++;
    return ans - 1;
}