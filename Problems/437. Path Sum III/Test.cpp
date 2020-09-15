#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Path Sum III") {
	Solution s;
	
	SECTION("normal input") {
		/*
		 *        10
		 *	     /  \
		 *	    5   -3
		 *	   / \    \
		 *	  3   2   11
		 *	 / \   \
		 *  3  -2   1
		 */

		TreeNode root(10);
		TreeNode node2(5);
		TreeNode node3(-3);
		TreeNode node4(3);
		TreeNode node5(2);
		TreeNode node6(11);
		TreeNode node7(3);
		TreeNode node8(-2);
		TreeNode node9(1);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.right = &node6;
		node4.left = &node7;
		node4.right = &node8;
		node5.right = &node9;

		CHECK(s.pathSum(&root, 8) == 3);
	}
}