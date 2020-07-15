/*  LeetCode: "Remove Duplicates from Sorted Array 2"
    - Given a sorted array nums, remove the duplicates in-place such that duplicates appeared at most twice and return the new length.  */

#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i-1] == nums[i])
            count++;
        else
            count = 1;
        if (count > 2) {
            nums.erase(nums.begin()+i);
            count--, i--;
        }

    }
    return nums.size();
}