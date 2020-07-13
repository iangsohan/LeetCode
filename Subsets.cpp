/*	LeetCode: "Subsets"
	- Given an array of distinct integers, return the powerset. */

#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans {{}};
    for (int i = 0; i < nums.size(); i++) {
        int size = ans.size();
        for (int j = 0; j < size; j++) {
            ans.push_back(ans[j]); 
            ans.back().push_back(nums[i]);
        }
    }
    return ans;
}