/*  LeetCode: "Contains Duplicate"
    - Given an array of integers, finds if the array contains any duplicates.   */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    if (!nums.size())
        return false;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] == nums[i+1])
            return true;
    }
    return false;
}