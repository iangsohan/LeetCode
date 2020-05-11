/*  LeetCode: "Pascal's Triangle II"
    - Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle. */

#include<iostream>
#include<vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> pascal {1};
    if (rowIndex == 0) return pascal;
    for (int i = 0; i < rowIndex; i++) {
        vector<int> row {1};
        for (int j = 0; j < pascal.size()-1; j++) {
            row.push_back(pascal[j] + pascal[j+1]);
        }
        row.push_back(1);
        pascal = row;
    }
    return pascal;
}