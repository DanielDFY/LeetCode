#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; ++i) {
            int half = i / 2;
            for(int j = 1;j <= half; ++j) {
                dp[i] += dp[i - j] * dp[j - 1];
            }
            dp[i] *= 2;
            if (i & 0x1) {
                dp[i] += dp[i - half - 1] * dp[half];
            }
        }
        return dp[n];
    }
};

#endif //LEETCODE_SOLUTION_H