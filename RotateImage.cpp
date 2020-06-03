/*  LeetCode: "Rotate Image"
    - Given an n x n matrix, rotate 90 degrees clockwise.   */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    unordered_map<string,int> umap;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0, k = matrix.size()-1; j < matrix.size() && k > -1; j++, k--)
            umap[to_string(matrix[i][j]) + to_string(i) + to_string(j)] = matrix[k][i];
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++)
            matrix[i][j] = umap[to_string(matrix[i][j]) + to_string(i) + to_string(j)];
    }
}