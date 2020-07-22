#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        if (size == 0)
            return { -1, -1 };

        int left = 0;
        int right = size;

        while (left < right) {
            int mid = (left + right) >> 1;
            if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }

        if (left < 0 || left >= size || nums[left] != target)
            return { -1, -1 };

        int leftBound = left;

        left = 0;
        right = size;

        while (left < right) {
            int mid = (left + right) >> 1;
            if (nums[mid] > target) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        int rightBound = right - 1;
        return { leftBound, rightBound };
    }
};

#endif //LEETCODE_SOLUTION_H