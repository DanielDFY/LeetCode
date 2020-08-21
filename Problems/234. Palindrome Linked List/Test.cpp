#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Lowest Common Ancestor of a Binary Tree")
{
	Solution s;
	
	SECTION("normal input") {
		/*
		 *			 3
		 *		   /   \
		 *		  5     1
		 *		 / \   / \
		 *		6   2 0   8
		 *		   / \
		 *		  7   4
		 */
		
		TreeNode root(3);
		TreeNode node2(5);
		TreeNode node3(1);
		TreeNode node4(6);
		TreeNode node5(2);
		TreeNode node6(0);
		TreeNode node7(8);
		TreeNode node8(7);
		TreeNode node9(4);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.left = &node6;
		node3.right = &node7;
		node5.left = &node8;
		node5.right = &node9;

		CHECK(s.lowestCommonAncestor(&root, &node2, &node3) == &root);
		CHECK(s.lowestCommonAncestor(&root, &node2, &node9) == &node2);
	}
}