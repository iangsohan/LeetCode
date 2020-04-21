/*	LeetCode: "Remove Element"
	- Given an array nums and a value val, remove all instances of that value in-place and return the new length.
*/

#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    if (nums.size() == 0) return 0;
    int i = -1;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}