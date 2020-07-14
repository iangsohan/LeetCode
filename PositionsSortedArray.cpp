/*	LeetCode: "Find First and Last Position of Element in Sorted Array"
	- Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value. */

#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int lower = -1, upper = -1;
    int left = 0, right = nums.size()-1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (target == nums[mid] && (mid == 0 || nums[mid-1] < target)) {
            lower = mid;
            right = left -1;
        }
        else if (target <= nums[mid])
            right = mid-1;
        else left = mid+1;
    }
    
    left = 0, right = nums.size()-1;
    while (left <= right && lower != -1) {
        int mid = left + (right - left)/2;
        if (target == nums[mid] && (mid == nums.size()-1 || nums[mid+1] > target)) {
            upper = mid;
            right = left -1;
        }
        else if (target >= nums[mid])
            left = mid+1;
        else right = mid-1;
    }
    return {lower, upper};
}