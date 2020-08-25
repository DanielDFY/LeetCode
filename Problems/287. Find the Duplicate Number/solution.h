#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int idxFast = 0;
        int idxSlow = 0;

        do {
            idxFast = nums[nums[idxFast]];
            idxSlow = nums[idxSlow];
        } while (idxFast != idxSlow);

        int ret = 0;

        while (ret != idxSlow) {
            ret = nums[ret];
            idxSlow = nums[idxSlow];
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H