/*  LeetCode: "Find Numbers with Even Number of Digits"
    - Given an array nums of integers, return how many of them contain an even number of digits.    */

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (!((int)(log10(nums[i])+1) % 2))
            count++;
    }
    return count;
}