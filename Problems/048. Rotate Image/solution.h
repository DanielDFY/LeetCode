#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::swap;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        mirror(matrix);
    }

private:
    void transpose(vector<vector<int>>& matrix) {
        int side = matrix.size();
        for (int row = 0; row < side; ++row) {
            for (int col = row + 1; col < side; ++col) {
                matrix[row][col] ^= matrix[col][row];
                matrix[col][row] ^= matrix[row][col];
                matrix[row][col] ^= matrix[col][row];
            }
        }
    }

    void mirror(vector<vector<int>>& matrix) {
        for (auto& v : matrix) {
            reverse(v.begin(), v.end());
        }
    }
};

#endif //LEETCODE_SOLUTION_H