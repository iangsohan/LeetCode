/*  LeetCode: "3Sum"
    - Given an array integers, find all unique triplets in the array which gives the sum of zero.
    - No repeated vectors.   */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > threeSum(vector<int> &num) {
    vector<vector<int>> triplets;
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++) {
        int target = -num[i];
        int front = i + 1, back = num.size() - 1;
        while (front < back) {
            int sum = num[front] + num[back];
            if (sum < target)
                front++;
            else if (sum > target)
                back--;
            else {
                triplets.push_back({num[i], num[front], num[back]});
                while (front < back && num[front] == triplets.back()[1])
                    front++;
                while (front < back && num[back] == triplets.back()[2])
                    back--;
            }
        }
        while (i+1 < num.size() && num[i+1] == num[i]) 
            i++;
    }
    return triplets;
}