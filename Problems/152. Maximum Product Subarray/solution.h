#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::swap;
using std::min;
using std::max;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Return early if input is empty
        if (nums.empty()) return 0;

        int ret = INT_MIN;
        // Running products
        int maxProd = 1;
        int minProd = 1;

        for (const auto& k : nums) {
            if (k < 0) {
                // Swap max and min
                swap(maxProd, minProd);
            }
            // Reset to current value if smaller or larger than it
            // (intuitively means that we start considering a new sub-array)
            maxProd = max(maxProd * k, k);
            minProd = min(minProd * k, k);
            // Update the best
            ret = max(ret, maxProd);
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H