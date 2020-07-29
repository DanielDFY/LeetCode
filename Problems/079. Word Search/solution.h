#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty())
            return false;

        int rows = board.size();
        int cols = board[0].size();

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                if (dfs(board, rows, cols, row, col, word, 0))
                    return true;
            }
        }

        return false;
    }

    bool dfs(vector<vector<char>>& board, int rows, int cols, int row, int col, const string& word, int index) {
        if (index == word.size())
            return true;

        if (row < 0 || row >= rows || col < 0 || col >= cols || word[index] != board[row][col])
            return false;

        char c = board[row][col];
        board[row][col] = '#';

        bool checkNext = false;
        checkNext = checkNext || dfs(board, rows, cols, row - 1, col, word, index + 1);
        checkNext = checkNext || dfs(board, rows, cols, row + 1, col, word, index + 1);
        checkNext = checkNext || dfs(board, rows, cols, row, col - 1, word, index + 1);
        checkNext = checkNext || dfs(board, rows, cols, row, col + 1, word, index + 1);
        if (checkNext) return true;

        board[row][col] = c;
        return false;
    }
};

#endif //LEETCODE_SOLUTION_H