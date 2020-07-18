#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::max;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int ret = 0;

        int leftIdx = 0;
        int rightIdx = size - 1;
    	
        while (leftIdx < rightIdx) {
            bool isLeftLower = height[leftIdx] < height[rightIdx];
            int h = isLeftLower ? height[leftIdx] : height[rightIdx];
            int area = (rightIdx - leftIdx) * h;
            ret = max(ret, area);

            if (isLeftLower)
                ++leftIdx;
            else
                --rightIdx;
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H