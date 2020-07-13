/*  LeetCode: "Set Matrix Zeroes"
    - Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place. */

#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    vector<vector<int>> zeroes;
    for (int row = 0; row < matrix.size(); row++)
        for (int col = 0; col < matrix.back().size(); col++)
            if (!matrix[row][col])
                zeroes.push_back({row, col});
    for (int i = 0; i < zeroes.size(); i++) {
        for (int j = 0; j < matrix.back().size(); j++)
            matrix[zeroes[i][0]][j] = 0;
        for (int j = 0; j < matrix.size(); j++)
            matrix[j][zeroes[i][1]] = 0;
    }
}