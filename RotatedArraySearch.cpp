/*	LeetCode: "Search in Rotated Sorted Array"
	- Given a rotated array with an unknown pivot, find the index of a given target value.	*/

#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {        
    int lower = 0, upper = nums.size()-1;
    while (lower <= upper) {
        int mid = (lower + upper)/2;
        if (target == nums[mid])
            return mid;
        if (nums[mid] > nums[upper]) {
            if (target < nums[mid] && target >= nums[lower])
                upper = mid - 1;
            else lower = mid + 1;
        }
        else if (nums[mid] < nums[lower]) {
            if (target > nums[mid] && target <= nums[upper])
                lower = mid + 1;
            else upper = mid - 1;
        }
        else {
            if (target < nums[mid])
                upper = mid - 1;
            else lower = mid + 1;
        }
    }
    return -1;
}