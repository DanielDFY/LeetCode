#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return nullptr;

        ListNode* pDummy = new ListNode(0);
        pDummy->next = head;

        ListNode* pFast = pDummy;
        ListNode* pSlow = pDummy;

        for (int i = 0; i < n; ++i) {
            pFast = pFast->next;
        }

        while (pFast->next != nullptr) {
            pFast = pFast->next;
            pSlow = pSlow->next;
        }

        pSlow->next = pSlow->next->next;

        ListNode* ret = pDummy->next;
        delete(pDummy);

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H