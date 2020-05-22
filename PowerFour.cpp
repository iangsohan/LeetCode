/*  LeetCode: "Power of Four"
    - Given an integer, write a function to check whether it is a power of 4.   */

#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfFour(int num) {
    if (num < 1)
        return false;
    return log10(num)/log10(4) == (int)(log10(num)/log10(4));
}