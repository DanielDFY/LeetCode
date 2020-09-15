#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

#include <numeric>
using std::accumulate;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        const int sum = accumulate(nums.begin(),nums.end(),0);
        sort(nums.rbegin(),nums.rend()); // sort the nums
        return sum % 2 == 0 && dfs(nums, 0, sum / 2);
    }

private:
    bool dfs(vector<int>& nums, int start, int target) {
        if (target < 0) return false;
        if (target == 0) return true;

        const int size = nums.size();
        for (int i = start; i < size; ++i) {
            // trims the dfs since we already sorted nums
            const int nextTarget = target - nums[i];
            if (nextTarget < 0) break;
            if (dfs(nums,i + 1,nextTarget)) return true;
        }

        return false;
    }
};

#endif //LEETCODE_SOLUTION_H