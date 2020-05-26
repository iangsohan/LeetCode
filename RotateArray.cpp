/*  LeetCode: "Rotate Array"
    - Given an array, rotate the array to the right by k steps, where k is non-negative.    */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int size = nums.size();
    nums.insert(nums.end(), nums.begin(), nums.end()-(k % nums.size()));
    nums.erase(nums.begin(), nums.end()-size);
}