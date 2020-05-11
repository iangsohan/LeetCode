/*  LeetCode: "Power of Two"
    - Given an integer, determine if it is a power of two.  */

#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    double log2 = log10(n) / log10(2);
    int ilog2 = log2;
    return (log2 == ilog2);
}