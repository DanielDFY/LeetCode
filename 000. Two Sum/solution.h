#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <unordered_map>
using std::unordered_map;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexRegister;
        for (int i = 0; i < nums.size(); ++i) {
            auto found = indexRegister.find(nums[i]);
            if (found != indexRegister.end()) {
                return {found->second, i};
            } else {
                indexRegister.emplace(target - nums[i], i);
            }
        }
        return {-1, -1};
    }
};

#endif //LEETCODE_SOLUTION_H
