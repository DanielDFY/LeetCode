#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Binary Tree Inorder Traversal")
{
    Solution s;
	SolutionIterative si;

    SECTION("normal input") {
        /*
		 *          1
		 *         / \
		 *        2   3
		 *           /
		 *          4
		 *           \
		 *            5
		 */

		TreeNode root(1);
		TreeNode node2(2);
		TreeNode node3(3);
		TreeNode node4(4);
		TreeNode node5(5);

		root.left = &node2;
		root.right = &node3;
		node3.left = &node4;
		node4.right = &node5;

		vector<int> ans{ 2, 1, 4, 5, 3 };

		CHECK(s.inorderTraversal(&root) == ans);
		CHECK(si.inorderTraversal(&root) == ans);
    }
}