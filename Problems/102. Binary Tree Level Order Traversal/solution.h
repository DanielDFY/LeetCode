#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <queue>
using std::queue;

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if (root == nullptr)
            return ret;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> v;
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                TreeNode* pNode = q.front();
                q.pop();

                v.push_back(pNode->val);
                if (pNode->left != nullptr)
                    q.push(pNode->left);
                if (pNode->right != nullptr)
                    q.push(pNode->right);
            }
            ret.push_back(v);
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H