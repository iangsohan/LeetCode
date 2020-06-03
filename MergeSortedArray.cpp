/*  LeetCode: "Merge Sorted Array"
    - Given two sorted integer arrays, merge them into one sorted array.
    - Assume nums1 has the capacity for all values.    */

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i = m-1, j = n-1, k = m+n-1; j > -1; )
        nums1[k--] = (i > -1 && nums1[i] > nums2[j]) ? nums1[i--]: nums2[j--];
}