#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

#include <vector>

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
        } else {
            pList1 = pList1->next;
            pList2 = pList2->next;
        }
	}

    return pList1 == nullptr && pList2 == nullptr;
}

TEST_CASE("Remove Nth Node From End of List")
{
    Solution s;

    SECTION("normal input") {
        std::vector<int> v1{ 1, 2, 3, 4, 5 };
        ListNode* pList1 = createList(v1);
        int n1 = 2;

        std::vector<int> ans1{ 1, 2, 3, 5 };
        ListNode* pAns1 = createList(ans1);
    		
        CHECK(checkList(s.removeNthFromEnd(pList1, n1), pAns1));

        deleteList(pList1);
        deleteList(pAns1);

        std::vector<int> v2{ 1 };
        ListNode* pList2 = createList(v2);
        int n2 = 1;

        std::vector<int> ans2{ };
        ListNode* pAns2 = createList(ans2);

        CHECK(checkList(s.removeNthFromEnd(pList2, n2), pAns2));

        deleteList(pList2);
        deleteList(pAns2);
    }
}