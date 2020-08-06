#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

ListNode* createList(const vector<int>& v, int pos, ListNode*& pEntry) {
	ListNode dummy(0);
	ListNode* pNode = &dummy;
	pEntry = nullptr;
	for (const int& k : v) {
		pNode->next = new ListNode(k);
		pNode = pNode->next;
		if (pos-- == 0) {
			pEntry = pNode;
		}
	}
	pNode->next = pEntry;
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
		ListNode* pEntry1 = nullptr;
		ListNode* list1 = createList(v1, 1, pEntry1);

		CHECK(s.detectCycle(list1) == pEntry1);

		deleteList(list1, v1.size());

		vector<int> v2{ 1,2 };
		ListNode* pEntry2 = nullptr;
		ListNode* list2 = createList(v2, 0, pEntry2);

		CHECK(s.detectCycle(list2) == pEntry2);

		deleteList(list2, v2.size());

		vector<int> v3{ 1 };
		ListNode* pEntry3 = nullptr;
		ListNode* list3 = createList(v2, -1, pEntry3);

		CHECK(s.detectCycle(list3) == pEntry3);

		deleteList(list3, v3.size());
	}
}