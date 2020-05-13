/*  LeetCode: "3Sum"
    - Given an array integers, find all unique triplets in the array which gives the sum of zero.
    - No repeated vectors.   */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void twoSum(vector<vector<int>>& triplets, vector<int> nums, int target, int start) {
    unordered_set<int> sum;
    unordered_set<int> end;
    for (int i = start+1; i < nums.size(); i++) {
        if (sum.count(target-nums[i]) && !end.count(nums[i])) {
            triplets.push_back({nums[start], target-nums[i], nums[i]});
            end.insert(nums[i]);
        }
        sum.insert(nums[i]);
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> triplets {};
    if (nums.size() < 3) return triplets;
    sort(nums.begin(), nums.end());
    twoSum(triplets, nums, -1 * nums[0], 0);
    for (int i = 1; i < nums.size()-2; i++) {
        while (nums[i] == nums[i-1] && i < nums.size()-2) i++;
        if (i == nums.size()-2) break;
        int target = nums[i];
        twoSum(triplets, nums, -1 * target, i);
    }
    return triplets;
}