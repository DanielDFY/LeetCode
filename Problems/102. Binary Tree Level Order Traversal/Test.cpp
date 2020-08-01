#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Binary Tree Level Order Traversal")
{
    Solution s;

	SECTION("normal input") {
		/*
		 *          3
		 *         / \
		 *        9   20
		 *         \   \
		 *         15   7
		 */

		TreeNode root(3);
		TreeNode node2(9);
		TreeNode node3(20);
		TreeNode node4(15);
		TreeNode node5(7);

		root.left = &node2;
		root.right = &node3;
		node2.right = &node4;
		node3.right = &node5;

		vector<vector<int>> ans{
			{3},
			{9,20},
			{15,7}
		};

		CHECK(s.levelOrder(&root) == ans);
	}
}