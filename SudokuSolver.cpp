/*  LeetCode: "Sudoku Solver"
    - Write a program to solve a Sudoku puzzle by filling the empty cells.  */

#include <vector>
using namespace std;

bool valid(vector<vector<char>> board, int val, int row, int col) {
    for (int i = row - row % 3; i < row - row % 3 + 3; i++)
        for (int j = col - col % 3; j < col - col % 3 + 3; j++)
            if (val == board[i][j]-'0')
                return false;
    for (int i = 0; i < 9; i++)
        if (val == board[row][i]-'0' || val == board[i][col]-'0')
            return false;
    return true;
}

bool available(vector<vector<char>> board, int& row, int& col) {
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (board[row][col] == '.')
                return true;
    return false;
}

bool solver(vector<vector<char>>& board) {
    int row, col;
    if (!available(board, row, col))
        return true;
    for (int val = 1; val <= 9; val++) {
        if (valid(board, val, row, col)) {
            board[row][col] = val+'0';
            if (solver(board))
                return true;
            board[row][col] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    solver(board);
}   