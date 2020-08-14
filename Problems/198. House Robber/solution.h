#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::max;

class Solution {
public:
    int rob(vector<int>& nums) {
        int preMax = 0, curMax = 0;
        for (const auto& k : nums) {
            int tmpMax = max(preMax + k, curMax);
            preMax = curMax;
            curMax = tmpMax;
        }
        return curMax;
    }
};

#endif //LEETCODE_SOLUTION_H