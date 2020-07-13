/*  LeetCode: "Next Permutation"
    - Given an array of integers, rearrange the array into the lexicographically next greater permutation of numbers.  */

#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    for (int i = nums.size()-1; i > 0; i--)
        if (nums[i] > nums[i-1])
            for (int j = nums.size()-1; j > i-1; j--)
                if (nums[i-1] < nums[j]) {
                    int temp = nums[i-1];
                    nums[i-1] = nums[j];
                    nums[j] = temp;   
                    sort(nums.begin()+i, nums.end());
                    return;
                }
    sort(nums.begin(), nums.end());
}