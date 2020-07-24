#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int ret = nums[0];

        int sum = 0;
        for (const auto& i : nums) {
            sum += i;
            if (sum < 0) {
                sum = 0;
                ret = ret < i ? i : ret;
            }
            else {
                ret = ret < sum ? sum : ret;
            }
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H