#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0, maxIdx = 0; i <= maxIdx; ++i) {
            int currentMaxIdx = i + nums[i];
            if (currentMaxIdx > maxIdx)
                maxIdx = currentMaxIdx;
            if (maxIdx >= n - 1)
                return true;
        }
        return false;
    }
};

#endif //LEETCODE_SOLUTION_H