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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(preorder, inorder, 0, preorder.size(), 0, inorder.size());
    }

private:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
        if (preStart == preEnd)
            return nullptr;

        int rootVal = preorder[preStart];

        int rootIdx;
        for (rootIdx = inStart; rootIdx < inEnd; ++rootIdx) {
            if (inorder[rootIdx] == rootVal)
                break;
        }

        int leftSize = rootIdx - inStart;
        TreeNode* pLeft = buildTree(preorder, inorder, preStart + 1, preStart + 1 + leftSize, inStart, rootIdx);
        TreeNode* pRight = buildTree(preorder, inorder, preStart + 1 + leftSize, preEnd, rootIdx + 1, inEnd);

        return new TreeNode(rootVal, pLeft, pRight);

    }
};

#endif //LEETCODE_SOLUTION_H