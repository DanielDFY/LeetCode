#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
using std::stack;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || p == root || q == root)
            return root;

        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        return (leftLCA == nullptr) ? rightLCA : (rightLCA == nullptr) ? leftLCA : root;
    }
};

#endif //LEETCODE_SOLUTION_H