#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

bool isSameTree(TreeNode* lhs, TreeNode* rhs) {
	if (lhs == nullptr && rhs == nullptr)
		return true;

	if (lhs == nullptr || rhs == nullptr)
		return false;

	if (lhs->val != rhs->val)
		return false;

	return isSameTree(lhs->left, rhs->left) && isSameTree(lhs->right, rhs->right);
}

void deleteTree(TreeNode* root) {
	if (root == nullptr)
		return;

	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}

TEST_CASE("Construct Binary Tree from Preorder and Inorder Traversal")
{
    Solution s;

	SECTION("normal input") {
		/*
		 *          3
		 *         / \
		 *        9  20
		 *           / \
		 *          15  7
		 */

		// input
		vector<int> preorder{ 3,9,20,15,7 };
		vector<int> inorder{ 9,3,15,20,7 };
		
		// answer
		TreeNode root(3);
		TreeNode node2(9);
		TreeNode node3(20);
		TreeNode node4(15);
		TreeNode node5(7);

		root.left = &node2;
		root.right = &node3;
		node3.left = &node4;
		node3.right = &node5;


		CHECK(isSameTree(s.buildTree(preorder, inorder), &root));
	}
}