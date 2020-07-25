#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ret;
        if (intervals.empty()) {
            return ret;
        }

        sort(intervals.begin(), intervals.end(), [](const vector<int>& lhs, const vector<int>& rhs) { return lhs[0] < rhs[0]; });

        int leftBound = intervals[0][0];
        int rightBound = intervals[0][1];

        for (const auto& interval : intervals) {
            if (interval[0] > rightBound) {
                ret.push_back({ leftBound, rightBound });
                leftBound = interval[0];
                rightBound = interval[1];
            }
            else if (interval[1] > rightBound) {
                rightBound = interval[1];
            }
        }

        ret.push_back({ leftBound, rightBound });

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H