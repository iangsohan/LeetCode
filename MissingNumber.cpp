/*  LeetCode: "Missing Number"
    - Given an array that starts with 0, find the one that is missing from the array.   */

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int sum = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        sum += (i - nums[i]);
    }
    return sum;
}