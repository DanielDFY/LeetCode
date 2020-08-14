#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = (rows != 0 ? grid[0].size() : 0);
        int ret = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    ++ret;
                    eraseIslands(grid, i, j);
                }
            }
        }
        return ret;
    }
private:
    void eraseIslands(vector<vector<char>>& grid, int i, int j) {
        int rows = grid.size(), cols = grid[0].size();
        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        eraseIslands(grid, i - 1, j);
        eraseIslands(grid, i + 1, j);
        eraseIslands(grid, i, j - 1);
        eraseIslands(grid, i, j + 1);
    }
};

#endif //LEETCODE_SOLUTION_H