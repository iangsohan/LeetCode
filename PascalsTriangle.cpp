/*  LeetCode: "Pascal's Triangle"
    - Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.    */

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<int> start {1};
    vector<vector<int>> pascal {};
    if (numRows == 0) return pascal;
    else pascal.push_back(start);
    if (numRows == 1) return pascal;
    for (int i = 1; i < numRows; i++) {
        vector<int> row {1};
        for (int j = 0; j < pascal.back().size()-1; j++) {
            row.push_back(pascal.back()[j] + pascal.back()[j+1]);
        }
        row.push_back(1);
        pascal.push_back(row);
    }
    return pascal;
}