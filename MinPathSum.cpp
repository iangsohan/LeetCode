/*	LeetCode: "Minimum Path Sum"
	- Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.
    - Assume only right and down movements. */

#include <vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    vector<int> sums {};
    helperMethod(grid, sums, 0, 0, 0);
    sort(sums.begin(), sums.end());
    return sums[0];
}

void helperMethod(vector<vector<int>> grid, vector<int>& sums, int sum, int row, int col) {
    if (row == grid.back().size()-1 && col == grid.size()-1)
        sums.push_back(sum + grid[row][col]);
    else {
        if (row != grid.back().size()-1)
            helperMethod(grid, sums, sum + grid[row][col], row+1, col);
        if (col != grid.size()-1)
            helperMethod(grid, sums, sum + grid[row][col], row, col+1);
    }
}