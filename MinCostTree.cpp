/*  LeetCode: "Minimum Cost Tree From Leaf Values"
    - Given an array arr of positive integers, consider all binary trees such that:
        - Each node has either 0 or 2 children.
        - The values of arr correspond to the values of each leaf in an in-order traversal of the tree. 
        - The value of each non-leaf node is equal to the product of the largest leaf value in its left and right subtree respectively. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxi[41][41];
int memo[41][41];

int dp(int left, int right) {
    if (left == right)
        return 0;
    if (memo[left][right] != -1)
        return memo[left][right];

    int ans = 1<<30;
    for (int i = left; i < right; i++)
        ans = min(maxi[left][i] * maxi[i+1][right] + dp(left, i) + dp(i+1, right), ans);
    memo[left][right] = ans;
    return memo[left][right];
}

int mctFromLeafValues(vector<int>& arr) {
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < arr.size(); i++) {
        maxi[i][i] = arr[i];
        for (int j = i+1; j < arr.size(); j++) {
            maxi[i][j] = max(maxi[i][j-1], arr[j]);
        }
    }
    return dp(0, arr.size()-1);
}