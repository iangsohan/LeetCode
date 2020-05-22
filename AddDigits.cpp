/*  LeetCode: "Add Digits"
    - Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.  */

#include <iostream>
using namespace std;

int addDigits(int num) {
    string copy = to_string(num);
    if (num < 10)
        return num;
    num = 0;
    for (int i = 0; i < copy.length(); i++)
        num += copy[i] - '0';
    return addDigits(num);
}