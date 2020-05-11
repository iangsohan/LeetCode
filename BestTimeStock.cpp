/*  LeetCode: "Best Time to Buy and Sell Stock"
    - Given an array of the daily price of stock, determine the maximum profit. */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int max = 0;
    if (prices.empty()) return max;
    vector<int> curMax {prices.back()};
    for (int i = prices.size()-2; i > -1; i--) {
        if (prices[i] > curMax.back()) curMax.push_back(prices[i]);
        else curMax.push_back(curMax.back());
    }
    reverse(curMax.begin(), curMax.end());
    for (int i = 0; i < prices.size(); i++) {
        if (curMax[i] - prices[i] > max) max = curMax[i] - prices[i];
    }
    return max;
}