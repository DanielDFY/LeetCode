#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Symmetric Tree")
{
    Solution s;

    SECTION("valid input") {
		/*
		 *           1
		 *         /   \
		 *        2     2
		 *       / \   / \
		 *      3   4 4   3
		 */

		TreeNode root(1);
		TreeNode node2(2);
		TreeNode node3(2);
		TreeNode node4(3);
		TreeNode node5(4);
		TreeNode node6(4);
		TreeNode node7(3);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.left = &node6;
		node3.right = &node7;

		CHECK(s.isSymmetric(&root) == true);
    }

	SECTION("invalid input") {
		/*
		 *          1
		 *         / \
		 *        2   2
		 *         \   \
		 *          3   3
		 */

		TreeNode root(1);
		TreeNode node2(2);
		TreeNode node3(2);
		TreeNode node4(3);
		TreeNode node5(3);

		root.left = &node2;
		root.right = &node3;
		node2.right = &node4;
		node3.right = &node5;

		CHECK(s.isSymmetric(&root) == false);
	}
}