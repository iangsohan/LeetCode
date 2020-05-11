/*	LeetCode: "Remove Duplicates from Sorted Arrays"
	- Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
    - It doesn't matter what values are set beyond the returned length.
*/

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int count = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            count++;
            nums[count] = nums[i];
        }
    }
    return count + 1;
}