#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution.h"

TEST_CASE("Add Two Numbers", "addTwoNumbers")
{
    Solution s;

    int num1 = 5172;
    std::vector<int> v1{2, 7, 1, 5};
    ListNode l1(0), *tail1 = &l1;
    for (auto iter = v1.begin(); iter != v1.end(); ++iter, tail1 = tail1->next) {
        tail1->next = new ListNode(*iter);
    }

    int num2 = 4653;
    std::vector<int> v2{3, 5, 6, 4};
    ListNode l2(0), *tail2 = &l2;
    for (auto iter = v2.begin(); iter != v2.end(); ++iter, tail2 = tail2->next) {
        tail2->next = new ListNode(*iter);
    }

    int result = 0;
    ListNode* resultList = s.addTwoNumbers(l1.next, l2.next);
    for (int coefficient = 1; resultList; resultList = resultList->next, coefficient *= 10) {
        result += resultList->val * coefficient;
    }

    REQUIRE( result == num1 + num2 );
}