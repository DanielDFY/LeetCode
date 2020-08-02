#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Maximum Depth of Binary Tree")
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

		TreeNode root(3);
		TreeNode node2(9);
		TreeNode node3(20);
		TreeNode node4(15);
		TreeNode node5(7);

		root.left = &node2;
		root.right = &node3;
		node3.left = &node4;
		node3.right = &node5;


		CHECK(s.maxDepth(&root) == 3);
	}
}