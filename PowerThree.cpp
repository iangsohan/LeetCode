/*  LeetCode: "Power of Three"
    - Given an integer, write a function to determine if it is a power of three.    */

#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfThree(int n) {
    if (n < 1)
        return false;
    return log10(n)/log10(3) == (int)(log10(n)/log10(3));
}