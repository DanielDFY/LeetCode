#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("House Robber")
{
	Solution s;
	
	SECTION("normal input 1") {
		/*
		 *          3
		 *         / \
		 *        2   3
		 *         \   \
		 *          3   1
		 */

		TreeNode root(3);
		TreeNode node2(2);
		TreeNode node3(3);
		TreeNode node4(3);
		TreeNode node5(1);

		root.left = &node2;
		root.right = &node3;
		node2.right = &node4;
		node3.right = &node5;
		CHECK(s.rob(&root) == 7);
	}

	SECTION("normal input 2") {
		/*
		 *          3
		 *         / \
		 *        4   5
		 *       / \   \
		 *      1   3   1
		 */

		TreeNode root(3);
		TreeNode node2(4);
		TreeNode node3(5);
		TreeNode node4(1);
		TreeNode node5(3);
		TreeNode node6(1);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.right = &node6;
		CHECK(s.rob(&root) == 9);
	}
}