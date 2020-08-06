#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

ListNode* createList(const vector<int>& v, int pos) {
	ListNode dummy(0);
	ListNode* pNode = &dummy;
	ListNode* pEnter = nullptr;
	for (const int& k : v) {
		pNode->next = new ListNode(k);
		pNode = pNode->next;
		if (pos-- == 0) {
			pEnter = pNode;
		}
	}
	pNode->next = pEnter;
	return dummy.next;
}

void deleteList(ListNode* pHead, int length) {
	for (int i = 0; i < length; ++i) {
		ListNode* pNext = pHead->next;
		delete(pHead);
		pHead = pNext;
	}
}

TEST_CASE("Linked List Cycle")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> v1{ 3,2,0,-4 };
		ListNode* list1 = createList(v1, 1);

		CHECK(s.hasCycle(list1) == true);

		deleteList(list1, v1.size());

		vector<int> v2{ 1,2 };
		ListNode* list2 = createList(v2, 0);

		CHECK(s.hasCycle(list2) == true);

		deleteList(list2, v2.size());

		vector<int> v3{ 1 };
		ListNode* list3 = createList(v2, -1);

		CHECK(s.hasCycle(list3) == false);

		deleteList(list3, v3.size());
	}
}