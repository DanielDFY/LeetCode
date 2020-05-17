#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

ListNode* createList(int n) {
    ListNode* pHead = new ListNode(0);
    ListNode* pTail = pHead;

    for (div_t divResult{n, 0}; divResult.quot != 0; pTail = pTail->next) {
        divResult = div(divResult.quot, 10);
        pTail->next = new ListNode(divResult.rem);
    }

    ListNode* pRes = pHead->next;
    delete(pHead);
    pHead = nullptr;

    return pRes;
}

void deleteList(ListNode* pList) {
    for (ListNode* pNext; pList != nullptr; pList = pNext) {
        pNext = pList->next;
        delete(pList);
    }
}

int getNumber(ListNode* pList) {
    int result = 0;

    for (int coefficient = 1; pList; pList = pList->next, coefficient *= 10) {
        result += pList->val * coefficient;
    }

    return result;
}

TEST_CASE("Add Two Numbers")
{
    Solution s;

    SECTION("normal input") {
        SECTION("both non-zero") {
            int num1 = 5172;
            int num2 = 4603;
            ListNode* pList1 = createList(num1);
            ListNode* pList2 = createList(num2);

            ListNode* pResult = s.addTwoNumbers(pList1, pList2);
            int result = getNumber(pResult);

            CHECK(result == num1 + num2);

            deleteList(pList1);
            deleteList(pList2);
            deleteList(pResult);
        }

        SECTION("one addend is zero") {
            int num1 = 123;
            int num2 = 0;
            ListNode* pList1 = createList(num1);
            ListNode* pList2 = createList(num2);

            ListNode* pResult = s.addTwoNumbers(pList1, pList2);
            int result = getNumber(pResult);

            CHECK(result == num1 + num2);

            deleteList(pList1);
            deleteList(pList2);
            deleteList(pResult);
        }
    }

    SECTION("input list may be nullptr") {
        SECTION("one addend list is nullptr") {
            int num = 123;
            ListNode* pList = createList(num);

            ListNode* pResult = s.addTwoNumbers(pList, nullptr);
            int result = getNumber(pResult);

            CHECK(result == num);

            deleteList(pList);
            deleteList(pResult);
        }

        SECTION("both lists are nullptr") {
            ListNode* pResult = s.addTwoNumbers(nullptr, nullptr);
            int result = getNumber(pResult);

            CHECK(result == 0);

            deleteList(pResult);
        }
    }
}