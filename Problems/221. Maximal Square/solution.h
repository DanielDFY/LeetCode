#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::min;
using std::max;


class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> dp(cols + 1, 0);
        int maxSide = 0, prev = 0;
        for (int row = 1; row <= rows; ++row) {
            for (int col = 1; col <= cols; ++col) {
                int curr = dp[col];
                if (matrix[row - 1][col - 1] == '1') {
                    dp[col] = min(min(prev, dp[col - 1]), dp[col]) + 1;
                    maxSide = max(maxSide, dp[col]);
                }
                else {
                    dp[col] = 0;
                }
                prev = curr;
            }
        }
        return maxSide * maxSide;
    }
};

#endif //LEETCODE_SOLUTION_H