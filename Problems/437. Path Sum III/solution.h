#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <unordered_map>
using std::unordered_map;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        unordered_map<int, int> cache;
        return pathSum(root, sum, cache, 0);
    }

private:
    int pathSum(TreeNode* root, int sum, unordered_map<int, int>& cache, int preSum) {
        if (root == nullptr)
            return 0;

        int curSum = root->val + preSum;

        int res = (curSum == sum) + (cache.count(curSum - sum) ? cache[curSum - sum] : 0);

        ++cache[curSum];
        res += pathSum(root->left, sum, cache, curSum)
            + pathSum(root->right, sum, cache, curSum);
        --cache[curSum];

        return res;
    }
};

#endif //LEETCODE_SOLUTION_H