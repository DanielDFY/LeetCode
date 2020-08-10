#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

ListNode* createList(const vector<int>& v) {
	ListNode dummy(0);
	ListNode* pNode = &dummy;
	for (const int& k : v) {
		pNode->next = new ListNode(k);
		pNode = pNode->next;
	}
	return dummy.next;
}

bool checkList(ListNode* pList1, ListNode* pList2) {
	while (pList1 != nullptr && pList2 != nullptr) {
		if (pList1->val != pList2->val) {
			return false;
		}
		pList1 = pList1->next;
		pList2 = pList2->next;
	}

	return pList1 == nullptr && pList2 == nullptr;
}

void deleteList(ListNode* pList) {
	for (ListNode* pNext; pList != nullptr; pList = pNext) {
		pNext = pList->next;
		delete(pList);
	}
}

TEST_CASE("Sort List")
{
	Solution s;

	SECTION("normal input") {
		vector<int> v1{ 4,2,1,3 };
		ListNode* list1 = createList(v1);
		sort(v1.begin(), v1.end());
		ListNode* ans1 = createList(v1);

		CHECK(checkList(s.sortList(list1), ans1));

		deleteList(list1);
		deleteList(ans1);

		vector<int> v2{ -1,5,3,4,0 };
		ListNode* list2 = createList(v2);
		sort(v2.begin(), v2.end());
		ListNode* ans2 = createList(v2);

		CHECK(checkList(s.sortList(list2), ans2));

		deleteList(list2);
		deleteList(ans2);
	}
}