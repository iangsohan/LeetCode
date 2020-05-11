/*  LeetCode: "Majority Element"
    - Given an array, find the majority element.    */

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++) {
        if (umap.count(nums[i]) == 0) umap[nums[i]] = 1;
        else umap[nums[i]] = umap[nums[i]] + 1;
        
        if (umap[nums[i]] > nums.size()/2) return nums[i];
    }
    return 0;
}