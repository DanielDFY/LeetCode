#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::lower_bound;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for (int k : nums) {
            auto it = lower_bound(res.begin(), res.end(), k);
            if (it == res.end()) res.push_back(k);
            else *it = k;
        }
        return res.size();
    }
};

#endif //LEETCODE_SOLUTION_H