/*	LeetCode: "Plus One"
	- Given a non-empty array of digits representing a non-negative integer, plus one to the integer.	*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    if (digits.empty()) digits.push_back(0);
    int x = digits[digits.size() - 1] + 1;
    digits.pop_back();
    if (x > 9) plusOne(digits);
    digits.push_back(x % 10);
    return digits;
}