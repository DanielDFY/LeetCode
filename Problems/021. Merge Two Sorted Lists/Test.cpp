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

TEST_CASE("Merge Two Sorted Lists")
{
    Solution s;

    SECTION("normal input") {
        std::vector<int> v1_1{ 1, 2, 4 };
        std::vector<int> v1_2{ 1, 3, 4 };

        ListNode* pList1_1 = createList(v1_1);
        ListNode* pList1_2 = createList(v1_2);

        ListNode* pResult1 = s.mergeTwoLists(pList1_1, pList1_2);

        std::vector<int> ans1{ 1, 1, 2, 3, 4, 4 };
        ListNode* pAns1 = createList(ans1);

        CHECK(checkList(pResult1, pAns1));

        deleteList(pResult1);
        deleteList(pAns1);
    	

        std::vector<int> v2_1{ 0, 3, 5 };
        std::vector<int> v2_2{ 1, 2, 4, 6, 7 };

        ListNode* pList2_1 = createList(v2_1);
        ListNode* pList2_2 = createList(v2_2);

        ListNode* pResult2 = s.mergeTwoLists(pList2_1, pList2_2);

        std::vector<int> ans2{ 0, 1, 2, 3, 4, 5, 6, 7 };
        ListNode* pAns2 = createList(ans2);

        CHECK(checkList(pResult2, pAns2));

        deleteList(pResult2);
        deleteList(pAns2);
    }

    SECTION("empty list input") {
        std::vector<int> v1_1{ 1, 2, 4 };
        std::vector<int> v1_2{ };

        ListNode* pList1_1 = createList(v1_1);
        ListNode* pList1_2 = createList(v1_2);

        ListNode* pResult1 = s.mergeTwoLists(pList1_1, pList1_2);

        std::vector<int> ans1{ 1, 2, 4 };
        ListNode* pAns1 = createList(ans1);

        CHECK(checkList(pResult1, pAns1));

        deleteList(pResult1);
        deleteList(pAns1);


        std::vector<int> v2_1{  };
        std::vector<int> v2_2{  };

        ListNode* pList2_1 = createList(v2_1);
        ListNode* pList2_2 = createList(v2_2);

        ListNode* pResult2 = s.mergeTwoLists(pList2_1, pList2_2);

        std::vector<int> ans2{  };
        ListNode* pAns2 = createList(ans2);

        CHECK(checkList(pResult2, pAns2));

        deleteList(pResult2);
        deleteList(pAns2);
    }
}