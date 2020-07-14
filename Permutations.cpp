/*  LeetCode: "Permutations"
    - Given a collection of distinct integers, return all possible permutations.    */

#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans {nums};
    for (int i = nums.size()-1; i > 0; i--) 
        if (nums[i] > nums[i-1]) 
            for (int j = nums.size()-1; j > i-1; j--) 
                if (nums[i-1] < nums[j]) {
                    int temp = nums[i-1];
                    nums[i-1] = nums[j];
                    nums[j] = temp;   
                    sort(nums.begin()+i, nums.end());
                    ans.push_back(nums);
                    i = nums.size();
                    j = i;
                }
    return ans;
}