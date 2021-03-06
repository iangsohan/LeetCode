/*  LeetCode: "Factorial Trailing Zeroes"
    - Given an integer, return the number of trailing zeroes in its factorial.  */

#include<iostream>
using namespace std;

int trailingZeroes(int n) {
    int count = 0;
    for (long i = 5; n/i > 0; i *= 5){
        count += (n/i);
    }
    return count;
}