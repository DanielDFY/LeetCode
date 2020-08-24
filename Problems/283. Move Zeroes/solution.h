#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int nonZeroTailIdx = 0;
        for (int i = 0, nonZeroTailIdx = 0; i < size; ++i) {
            if (nums[i] != 0) {
                nums[nonZeroTailIdx] = nums[i];
                if (nonZeroTailIdx != i) {
                    nums[i] = 0;
                }
                ++nonZeroTailIdx;
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H