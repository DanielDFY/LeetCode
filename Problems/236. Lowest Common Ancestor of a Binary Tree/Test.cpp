#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

#include <vector>
using std::vector;

ListNode* createList(const vector<int>& v) {
	ListNode dummy(0);
	ListNode* pNode = &dummy;
	for (const int& k : v) {
		pNode->next = new ListNode(k);
		pNode = pNode->next;
	}
	return dummy.next;
}

void deleteList(ListNode* pList) {
	for (ListNode* pNext; pList != nullptr; pList = pNext) {
		pNext = pList->next;
		delete(pList);
	}
}

TEST_CASE("Palindrome Linked List")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> v1 = { 1, 2 };
		ListNode* list1 = createList(v1);

		CHECK(s.isPalindrome(list1) == false);

		deleteList(list1);
		
		vector<int> v2 = { 1, 2, 2, 1 };
		ListNode* list2 = createList(v2);

		CHECK(s.isPalindrome(list2) == true);

		deleteList(list2);
	}

	SECTION("single node input") {
		vector<int> v = { 1 };
		ListNode* list = createList(v);

		CHECK(s.isPalindrome(list) == true);

		deleteList(list);
	}

	SECTION("normal input") {
		vector<int> v = { };
		ListNode* list = createList(v);

		CHECK(s.isPalindrome(list) == true);

		deleteList(list);
	}
}