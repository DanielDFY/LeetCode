#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::swap;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        if (nums.empty())
            return ret;

        permute(nums, 0, nums.size() - 1, ret);
        return ret;
    }

private:
    void permute(vector<int>& nums, int start, int end, vector<vector<int>>& results) {
        if (start == end) {
            results.push_back(nums);
        }
        else {
            for (int i = start; i <= end; ++i) {
                swap(nums[start], nums[i]);
                permute(nums, start + 1, end, results);
                swap(nums[start], nums[i]);
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H