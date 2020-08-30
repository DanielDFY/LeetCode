#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <utility>
using std::pair;

#include <algorithm>
using std::max;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int rob(TreeNode* root) {
        auto res = robSub(root);
        return max(res.first, res.second);
    }

private:
    pair<int, int> robSub(TreeNode* root) {
        if (root == nullptr) return { 0, 0 };

        auto left = robSub(root->left);
        auto right = robSub(root->right);

        return {
            max(left.first, left.second) + max(right.first, right.second),
            root->val + left.first + right.first
        };
    }
};

#endif //LEETCODE_SOLUTION_H