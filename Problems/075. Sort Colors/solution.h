#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include<algorithm>
using std::swap;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int nextRedIdx = 0, lastWhiteIdx = size - 1;
        for (int i = 0; i <= lastWhiteIdx; ++i) {
            if (nums[i] == 0) {
                swap(nums[nextRedIdx], nums[i]);
                ++nextRedIdx;
            }
            else if (nums[i] == 2) {
                swap(nums[lastWhiteIdx], nums[i]);
                --lastWhiteIdx;
            		// check the color of the object swapped back here
                --i;
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H