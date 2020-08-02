#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

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
    void flatten(TreeNode* root) {
        while (root != nullptr) {
            if (root->left != nullptr) {
                TreeNode* leftTail = root->left;
                while (leftTail->right != nullptr)
                    leftTail = leftTail->right;
                leftTail->right = root->right;
                root->right = root->left;
                root->left = nullptr;
            }
            root = root->right;
        }
    }
};

class SolutionRecursive {
public:
    void flatten(TreeNode* root) {
        if (root == nullptr)
            return;

        flattenTree(root);
    }

private:
    TreeNode* flattenTree(TreeNode* root) {
        TreeNode* left = root->left;
        TreeNode* right = root->right;

        TreeNode* tail = root;
        if (left != nullptr) {
            root->left = nullptr;
            root->right = left;
            tail = flattenTree(left);
        }

        if (right != nullptr) {
            tail->right = right;
            tail = flattenTree(right);
        }

        return tail;
    }
};

#endif //LEETCODE_SOLUTION_H