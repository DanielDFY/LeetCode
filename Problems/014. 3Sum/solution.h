#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        if (nums.empty())
            return ret;

        sort(nums.begin(), nums.end());
        for (auto iter = nums.cbegin(); iter != nums.cend(); ++iter) {
            if (iter != nums.cbegin() && *iter == *prev(iter))
                continue;
            auto b = next(iter);
            auto e = prev(nums.cend());
            while (b < e) {
                int sum = *iter + *b + *e;
                if (sum < 0) {
                    ++b;
                } else if (sum > 0) {
                    --e;
                } else {
					ret.push_back({ *iter, *b, *e });
                    while (b < e && *b == *next(b))
                        ++b;
                    while (b < e && *e == *prev(e))
                        --e;
                    ++b; --e;
                }
            }
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H