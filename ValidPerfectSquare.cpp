/*  LeetCode: "Valid Perfect Square"
    - Given a positive integer num, write a function which returns True if num is a perfect square else False.  */

#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    for (long long i = 0; i*i <= num; i++) {
        if (i*i == num)
            return true;
    }
    return false;
}