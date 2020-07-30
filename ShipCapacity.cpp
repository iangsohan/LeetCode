/*  LeetCode: "Capacity To Ship Packages Within D Days"
    - Given a vector of package weights, return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within D days.    */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int shipWithinDays(vector<int>& weights, int D) {
    if (weights.size() <= D) {
        sort(weights.begin(), weights.end());
        return weights.back();
    }

    int maxElem = *max_element(weights.begin(), weights.end());
    int sumElem = accumulate(weights.begin(), weights.end(), 0);

    if (D == 1)
        return sumElem;

    int l = maxElem, r = sumElem;

    int result = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (doesWork(weights, mid, D))
            result = mid, r = mid - 1;
        else
            l = mid + 1;
    }
    return result;
}

bool doesWork(vector<int>& weights, int capacity, int D) {
    int sum = 0, days = 1;
    for (auto weight : weights) {
        sum += weight;
        if (weight > capacity)
            return false;
        if (sum > capacity) {
            sum = weight;
            days++;
        } else if (sum == capacity) {
            sum = 0;
            days++;
        }
    }
    return (days > D) ? false : true;
}