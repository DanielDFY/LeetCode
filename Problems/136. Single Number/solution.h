#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = nums[0];
        int size = nums.size();
        for (int i = 1; i < size; ++i) {
            ret ^= nums[i];
        }
        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H