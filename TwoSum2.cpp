/*  LeetCode: "Two Sum II"
    - Given an array of integers in ascending order, find two numbers that they add to a given target.  */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> rev = numbers;
    reverse(rev.begin(), rev.end());
    int i = 0, j = 0;
    while (i != numbers.size()-1 || j != rev.size()) {
        if (numbers[i] + rev[j] == target) {
            int num2 = rev.size()-j;
            vector<int> ans {i+1, num2};
            return ans;
        }
        else if (numbers[i] + rev[j] < target) i++;
        else j++;
    }
    return vector<int> {};
}