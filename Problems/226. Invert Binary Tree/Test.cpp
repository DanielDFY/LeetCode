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

TEST_CASE("Maximal Square")
{
	Solution s;
	
	SECTION("normal input") {
		/*
		 *           4
		 *         /   \
		 *        2     7
		 *       / \   / \
		 *      1   3 6   9
		 */
		
		TreeNode root(4);
		TreeNode node2(2);
		TreeNode node3(7);
		TreeNode node4(1);
		TreeNode node5(3);
		TreeNode node6(6);
		TreeNode node7(9);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.left = &node6;
		node3.right = &node7;

		/*
		 *           4
		 *         /   \
		 *        7     2
		 *       / \   / \
		 *      9   6 3   1
		 */

		TreeNode ansRoot(4);
		TreeNode ansNode2(7);
		TreeNode ansNode3(2);
		TreeNode ansNode4(9);
		TreeNode ansNode5(6);
		TreeNode ansNode6(3);
		TreeNode ansNode7(1);

		ansRoot.left = &ansNode2;
		ansRoot.right = &ansNode3;
		ansNode2.left = &ansNode4;
		ansNode2.right = &ansNode5;
		ansNode3.left = &ansNode6;
		ansNode3.right = &ansNode7;
		
		CHECK(isSameTree(s.invertTree(&root), &ansRoot));
	}
}