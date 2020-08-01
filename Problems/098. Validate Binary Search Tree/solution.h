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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
        bool isLeftMost = true;
        int leftLimit = INT_MIN;

        while (!s.empty() || root != nullptr) {
            while (root != nullptr) {
                s.push(root);
                root = root->left;
            }

            root = s.top();
            s.pop();

            if (leftLimit >= root->val && !isLeftMost) {
                return false;
            }

            isLeftMost = false;

            leftLimit = root->val;
            root = root->right;
        }

        return true;
    }
};

class SolutionRecursive {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, false, false, 0, 0);
    }
    bool isValidBST(TreeNode* root, bool left, bool right, int min, int max) {
        if (!root) return true;
        else if ((left && root->val <= min) || (right && root->val >= max)) return false;
        else return isValidBST(root->left, left, true, min, root->val) && isValidBST(root->right, true, right, root->val, max);
    }
};

#endif //LEETCODE_SOLUTION_H