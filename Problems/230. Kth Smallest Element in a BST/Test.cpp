#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Maximal Square")
{
	Solution s;
	
	SECTION("normal input") {
		/*
		 *          3
		 *         / \
		 *        1   4
		 *         \
		 *          2
		 */
		
		TreeNode root(3);
		TreeNode node2(1);
		TreeNode node3(4);
		TreeNode node4(2);

		root.left = &node2;
		root.right = &node3;
		node2.right = &node4;

		CHECK(s.kthSmallest(&root, 1) == 1);
	}

	SECTION("normal input") {
		/*
		 *          5
		 *         / \
		 *        3   6
		 *       / \
		 *      2   4
		 *     /
		 *    1
		 */

		TreeNode root(5);
		TreeNode node2(3);
		TreeNode node3(6);
		TreeNode node4(2);
		TreeNode node5(4);
		TreeNode node6(1);
		

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node4.left = &node6;

		CHECK(s.kthSmallest(&root, 3) == 3);
	}
}