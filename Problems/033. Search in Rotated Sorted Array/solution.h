#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int m = (left + right) >> 1;

            if (nums[m] == target) {
                return m;
            } else if ((nums[left] <= target && target < nums[m]) || (nums[left] > nums[m] && (nums[left] <= target || nums[m] > target))) {
                right = m - 1;
            } else if ((nums[m] < target && target <= nums[right]) || (nums[m] > nums[right] && (nums[m] < target || target <= nums[right]))) {
                left = m + 1;
            } else {
                break;
            }
        }

        return -1;
    }
};

#endif //LEETCODE_SOLUTION_H