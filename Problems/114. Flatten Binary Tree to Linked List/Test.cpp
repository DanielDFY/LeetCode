#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TreeNode* createList(const std::vector<int>& v) {
	TreeNode* pHead = new TreeNode(0, nullptr, nullptr);
	TreeNode* pTail = pHead;

	for (const auto& k : v) {
		pTail->right = new TreeNode(k, nullptr, nullptr);
		pTail = pTail->right;
	}

	TreeNode* pRet = pHead->right;
	delete(pHead);
	pHead = nullptr;

	return pRet;
}

bool isSameList(TreeNode* output, TreeNode* answer) {
	if (output == nullptr && answer == nullptr)
		return true;

	if (output == nullptr || answer == nullptr)
		return false;

	if (output->val != answer->val || output->left != nullptr)
		return false;

	return isSameList(output->right, answer->right);
}

void deleteList(TreeNode* pList) {
	for (TreeNode* pNext; pList != nullptr; pList = pNext) {
		pNext = pList->right;
		delete(pList);
	}
}

TEST_CASE("Flatten Binary Tree to Linked List")
{
	SECTION("iterative") {
		Solution s;
		
		/*
		 *          1
		 *         / \
		 *        2   5
		 *       / \   \
		 *      3   4   6
		 */
		
		TreeNode root(1);
		TreeNode node2(2);
		TreeNode node3(5);
		TreeNode node4(3);
		TreeNode node5(4);
		TreeNode node6(6);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.right = &node6;

		vector<int> answer{ 1,2,3,4,5,6 };
		TreeNode* answerList = createList(answer);

		s.flatten(&root);

		CHECK(isSameList(&root, answerList));

		deleteList(answerList);
	}

	SECTION("recursive") {
		SolutionRecursive s;
		
		/*
		 *          1
		 *         / \
		 *        2   5
		 *       / \   \
		 *      3   4   6
		 */


		TreeNode root(1);
		TreeNode node2(2);
		TreeNode node3(5);
		TreeNode node4(3);
		TreeNode node5(4);
		TreeNode node6(6);

		root.left = &node2;
		root.right = &node3;
		node2.left = &node4;
		node2.right = &node5;
		node3.right = &node6;

		vector<int> answer{ 1,2,3,4,5,6 };
		TreeNode* answerList = createList(answer);

		s.flatten(&root);

		CHECK(isSameList(&root, answerList));

		deleteList(answerList);
	}
}