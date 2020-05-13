/*	LeetCode: "Two Sum"
    - Given an array of integers, return indices of the two numbers that they add up to a specific target.
    - You may assume that each input would have exactly one solution, and you may not use the same element twice.	*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> sum;
    for (int i = 0; i < nums.size(); i++) {
        if (sum.count(target-nums[i]))
            return {sum[target-nums[i]], i};
        sum[nums[i]] = i;
    }
    return {};
}