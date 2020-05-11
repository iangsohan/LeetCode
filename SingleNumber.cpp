/*  LeetCode: "Single Number"
    - Given a non-empty array of integers where every element appears twice, return the solo number.    */

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_set<int> uset;
    for (int i = 0; i < nums.size(); i++) {
        if (uset.count(nums[i]) == 0)
            uset.insert(nums[i]);
        else
            uset.erase(nums[i]);
    }
    return *uset.begin();
}