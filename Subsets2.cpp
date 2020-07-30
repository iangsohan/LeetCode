/*  LeetCode: "Subsets II"
    - Given a collection of integers that might contain duplicates, nums, return all possible subsets (the power set).  */

#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> subsets;
    vector<int> subset;
    helper(nums, subsets, subset, 0);
    return subsets;
}

void helper(vector<int>& nums, vector<vector<int>>& subsets, vector<int>& subset, int begin) {
    subsets.push_back(subset);
    for (int i = begin; i < nums.size(); i++) {
        if (i != begin && nums[i] == nums[i-1]) continue;
        subset.push_back(nums[i]);
        helper(nums, subsets, subset, i+1);
        subset.pop_back();
    }
}