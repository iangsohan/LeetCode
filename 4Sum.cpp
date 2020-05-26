/*  LeetCode: "4Sum"
    -  Given an array, find all unique quadruplets in the array which gives the sum of target.  */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    if (nums.size() < 4)
        return {};
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int j = 0; j < nums.size()-3; j++) {
        for (int i = j+1; i < nums.size(); i++) {
            int temp = target-nums[j]-nums[i];
            int front = i + 1, back = nums.size() - 1;
            while (front < back) {
                int sum = nums[front] + nums[back];
                if (sum < temp)
                    front++;
                else if (sum > temp)
                    back--;
                else {
                    ans.push_back({nums[j], nums[i], nums[front], nums[back]});
                    while (front < back && nums[front] == ans.back()[2])
                        front++;
                    while (front < back && nums[back] == ans.back()[3])
                        back--;
                }
            }
            while (i+1 < nums.size() && nums[i+1] == nums[i]) 
                i++;
        }
        while (j+1 < nums.size() && nums[j+1] == nums[j]) 
            j++;
    }
    return ans;
}