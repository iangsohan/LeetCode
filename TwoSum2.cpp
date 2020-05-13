/*  LeetCode: "Two Sum II"
    - Given an array of integers in ascending order, find two numbers that they add to a given target.  */

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0, j = numbers.size()-1;
    while (i < j) {
        if (numbers[i] + numbers[j] == target)
            return {i+1, j+1};
        else if (numbers[i] + numbers[j] < target) i++;
        else j--;
    }
    return {};
}