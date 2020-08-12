#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ret = nums[0];
        int count = 1;
        int size = nums.size();

        for (int i = 1; i < size; ++i) {
            if (nums[i] == ret)
                ++count;
            else if (count == 1)
                ret = nums[i];
            else
                --count;
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H