/*	LeetCode: "Remove Duplicates from Sorted Arrays"
	- Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
    - It doesn't matter what values are set beyond the returned length.
*/

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 2) {
        return nums.size();
    }
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums.erase(nums.begin() + i + 1);
            i--;
        }
    }
    return nums.size();
}