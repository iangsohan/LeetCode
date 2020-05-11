/*  LeetCode: "Merge Sorted Array"
    - Given two sorted integer arrays, merge them into one sorted array.
    - Assume nums1 has the capacity for all values.    */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i = m; i < nums1.size(); i++) {
        nums1[i] = nums2[i-m];
    }
    sort(nums1.begin(), nums1.end());
}