#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int numSize = nums.size();
        int subsetSize = pow(2, nums.size());
        vector<vector<int>> ret(subsetSize);

        for (int i = 0; i < subsetSize; ++i) {
            for (int j = 0; j < numSize; ++j) {
                if ((i >> j) & 0x1)
                    ret[i].push_back(nums[j]);
            }
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H