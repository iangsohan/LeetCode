/*	LeetCode: "Two Sum"
    - Given an array of integers, return indices of the two numbers that they add up to a specific target.
    - You may assume that each input would have exactly one solution, and you may not use the same element twice.	*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// unordered_map option
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++) {
        if (umap.find(target - nums[i]) != umap.end()) {
            return { umap[nums[i]], i };
        }
        umap[nums[i]] = i;
    }
    return {};
}

// for loop option
vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return { i, j };
            }
        }
    }
    return {};
}