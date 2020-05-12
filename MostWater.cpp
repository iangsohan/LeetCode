/*  LeetCode: "Contained With Most Water"
    - Given an array of container edgs heights, find the heights that will hold the most water. */

#include<iostream>
#include<math.h>
using namespace std;

int maxArea(vector<int>& height) {
    int max = 0;
    for (int i = 0; i < height.size(); i++) {
        for (int j = height.size()-1; j > i; j--) {
            if (height[i] * (j-i) < max) break;
            if (min(height[i], height[j]) * (j-i) > max)
                max = min(height[i], height[j]) * (j-i);
        }
    }
    return max;
}