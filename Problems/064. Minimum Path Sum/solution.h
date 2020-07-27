#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include<algorithm>
using std::min;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 1; i < cols; ++i) {
            grid[0][i] += grid[0][i - 1];
        }

        for (int i = 1; i < rows; ++i) {
            grid[i][0] += grid[i - 1][0];
        }

        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
            }
        }

        return grid[rows - 1][cols - 1];
    }
};

#endif //LEETCODE_SOLUTION_H