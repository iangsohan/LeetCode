/*  LeetCode: "Sort Colors"
    - Given an array, sort the colors red(0), white(1), and blue(2) in one pass.    */

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    for (int i = 0; i < nums.size(); ) {
        int start = i, store = nums[start], place = 0;
        if (store == 2)
            place = nums.size();
        if (store == 2 || store == 0) {
            while (nums[i] == store) {
                if (i == nums.size()-1) {
                    nums.insert(nums.begin()+place, nums.size()-start, nums[i]);
                    nums.erase(nums.begin()+i+1, nums.end());
                    return;
                } else
                    i++;
            }
            nums.insert(nums.begin()+place, (i-start), nums[i-1]);
            if (store == 2) {
                nums.erase(nums.begin()+start, nums.begin()+i);
                i = start;
            }
            else
                nums.erase(nums.begin()+i, nums.begin()+2*i-start);
        } else
            i++;
    }
}