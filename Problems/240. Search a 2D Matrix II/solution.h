#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0)
            return false;
        int cols = matrix[0].size();

        for (int row = 0, col = cols - 1; row < rows && col >= 0;) {
            int value = matrix[row][col];
            if (value == target) {
                return true;
            }
            else if (value < target) {
                ++row;
            }
            else {
                --col;
            }
        }

        return false;
    }
};

#endif //LEETCODE_SOLUTION_H