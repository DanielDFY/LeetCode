#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <algorithm>
using std::sort;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ret;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, {}, 0, ret);
        return ret;
    }

private:
    void dfs(const vector<int>& candidates, int target, vector<int> current, size_t start, vector<vector<int>>& ret) {
        if (target == 0) {
            ret.push_back(current);
            return;
        }

        for (size_t i = start; i < candidates.size(); ++i) {
            if (candidates[i] <= target) {
                current.push_back(candidates[i]);
                dfs(candidates, target - candidates[i], current, i, ret);
                current.pop_back();
            }
            else {
                break;
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H