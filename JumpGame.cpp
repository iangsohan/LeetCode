/*  LeetCode: "Jump Game"
    - Given an array of non-negative integers, you are initially positioned at the first index of the array.
    - Each element in the array represents your maximum jump length at that position.
    - Determine if you are able to reach the last index.    */

#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] + i >= nums.size()-1)
            return true;
        else if (!nums[i] && !canJumpHelper(nums, i))
            return false;
    }
    return true;
}

bool canJumpHelper(vector<int> nums, int col) {
    for (int i = col-1; i > -1; i--)
        if (nums[i] + i > col)
            return true;
    return false;
}