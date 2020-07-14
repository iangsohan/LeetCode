/*  LeetCode: "Valid Sudoku"
    - Determine if a 9x9 Sudoku board is valid. */

#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] != '.') {
                // InBox
                for (int i = row - row % 3; i < row - row % 3 + 3; i++) {
                    for (int j = col - col % 3; j < col - col % 3 + 3; j++) {
                        if (board[row][col] == board[i][j] && i != row && j != col)
                            return false;
                    }
                }
                // InRow
                for (int i = 0; i < 9; i++) {
                    if (board[row][col] == board[row][i] && i != col)
                        return false;
                    if (board[row][col] == board[i][col] && i != row)
                        return false;
                }
            }
        }
    }
    return true;
}