/*	LeetCode: "Search Insert Position"
	- Given a sorted array and a target value, return the index if the target is found.
	- If not, return the index where it would be if it were inserted in order.	*/

#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (target <= nums[i]) {
            return i;
        } else if (i == nums.size() - 1) {
            break;
        } else if (target < nums[i + 1]) {
            return i + 1;
        }
    }
    return nums.size();
}