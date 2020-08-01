#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Validate Binary Search Tree")
{
    Solution s;
	SolutionRecursive sr;

    SECTION("valid input") {
		/*
		 *          2
		 *         / \
		 *        1   4
		 *           / \
		 *          3   5
		 */

		TreeNode root(2);
		TreeNode node2(1);
		TreeNode node3(3);
		TreeNode node4(4);
		TreeNode node5(5);

		root.left = &node2;
		root.right = &node4;
		node4.left = &node3;
		node4.right = &node5;

		CHECK(s.isValidBST(&root) == true);
		CHECK(sr.isValidBST(&root) == true);
    }

	SECTION("invalid input") {
		/*
		 *          1
		 *         / \
		 *        2   4
		 *           / \
		 *          3   5
		 */

		TreeNode root(1);
		TreeNode node2(2);
		TreeNode node3(3);
		TreeNode node4(4);
		TreeNode node5(5);

		root.left = &node2;
		root.right = &node4;
		node4.left = &node3;
		node4.right = &node5;

		CHECK(s.isValidBST(&root) == false);
		CHECK(sr.isValidBST(&root) == false);
    }
}