#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

ListNode* createList(const std::vector<int>& v) {
    ListNode* pHead = new ListNode(0);
    ListNode* pTail = pHead;

    for (const auto& k : v) {
        pTail->next = new ListNode(k);
        pTail = pTail->next;
    }

    ListNode* pRet = pHead->next;
    delete(pHead);
    pHead = nullptr;

    return pRet;
}

void deleteList(ListNode* pList) {
    for (ListNode* pNext; pList != nullptr; pList = pNext) {
        pNext = pList->next;
        delete(pList);
    }
}

bool checkList(ListNode* pList1, ListNode* pList2) {
    while (pList1 != nullptr && pList2 != nullptr) {
        if (pList1->val != pList2->val) {
            return false;
        }
        else {
            pList1 = pList1->next;
            pList2 = pList2->next;
        }
    }

    return pList1 == nullptr && pList2 == nullptr;
}

TEST_CASE("Reverse Linked List")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> v = { 1, 2, 3, 4, 5 };
        vector<int> ans = { 5, 4, 3, 2, 1 };
        ListNode* outputList = s.reverseList(createList(v));
        ListNode* ansList = createList(ans);
		
		CHECK(checkList(outputList, ansList));

        deleteList(outputList);
        deleteList(ansList);
	}
}