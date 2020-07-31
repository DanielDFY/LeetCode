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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        inorderTraversal(ret, root);
        return ret;
    }

private:
    void inorderTraversal(vector<int>& output, TreeNode* root) {
        if (root == nullptr)
            return;

        inorderTraversal(output, root->left);
        output.push_back(root->val);
        inorderTraversal(output, root->right);
    }
};

class SolutionIterative {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;

        for (stack<TreeNode*> s; !s.empty() || root != nullptr;) {
            if (root != nullptr) {
                s.push(root);
                root = root->left;
            }
            else {
                root = s.top();
                s.pop();
                ret.push_back(root->val);
                root = root->right;
            }
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H