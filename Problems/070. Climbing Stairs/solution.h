#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 1;

        int ret = 0;
        int oneStepAway = 1, twoStepsAway = 1;

        for (int i = 2; i <= n; ++i) {
            ret = oneStepAway + twoStepsAway;
            twoStepsAway = oneStepAway;
            oneStepAway = ret;
        }
        return ret;
    }
};
#endif //LEETCODE_SOLUTION_H