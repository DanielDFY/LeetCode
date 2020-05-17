#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <cstdlib>

 // Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* pHead = new ListNode(0);
        ListNode* pTail = pHead;

        for (div_t sum{0, 0}; sum.quot || l1 || l2; pTail = pTail->next) {
            if (l1 != nullptr) {
                sum.quot += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum.quot += l2->val;
                l2 = l2->next;
            }

            // sum.quot as carry, sum.rem as digit value
            sum = div(sum.quot, 10);
            pTail->next = new ListNode(sum.rem);
        }

        ListNode* pResult = pHead->next;
        delete(pHead);
        pHead = nullptr;

        return pResult;
    }
};

#endif //LEETCODE_SOLUTION_H