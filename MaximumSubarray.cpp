/*  LeetCode: "Maximum Subarray"
    - Given an integer array, find the contiguous subarray which has the largest sum and return it. */

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int max = nums.back();
        for (int i = 0; i < nums.size(); i++) {
            int total = 0;
            for (int j = i; j < nums.size(); j++) {
                total += nums[j];
                if (total > max) max = total;
            }
        }
        return max;
    }