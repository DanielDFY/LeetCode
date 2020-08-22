#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> answer(length, 1);

        for (int i = 1; i < length; ++i) {
            answer[i] = nums[i - 1] * answer[i - 1];
        }

        int productToRight = 1;
        for (int i = length - 1; i >= 0; --i) {
            answer[i] *= productToRight;
            productToRight *= nums[i];
        }

        return std::move(answer);
    }
};

#endif //LEETCODE_SOLUTION_H