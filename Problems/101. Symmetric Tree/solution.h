#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <stack>
using std::stack;

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
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root, root);
    }
private:
    bool isSymmetric(TreeNode* rootLeft, TreeNode* rootRight) {
        if (rootLeft == nullptr && rootRight == nullptr)
            return true;

        if (rootLeft == nullptr || rootRight == nullptr)
            return false;

        if (rootLeft->val != rootRight->val)
            return false;

        return isSymmetric(rootLeft->left, rootRight->right) && isSymmetric(rootLeft->right, rootRight->left);
    }
};

#endif //LEETCODE_SOLUTION_H