#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include<algorithm>
using std::swap;

class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m < n) swap(m, n);
        if (n < 2) return m;
        vector<int> steps(m, 1);
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                steps[j] += steps[j - 1];
            }
        }
        return steps[m - 1];
    }
};

#endif //LEETCODE_SOLUTION_H