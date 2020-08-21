#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
using std::stack;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode* pFast = head;
        ListNode* pSlow = head;

        while (pFast != nullptr && pFast->next != nullptr) {
            pFast = pFast->next->next;
            pSlow = pSlow->next;
        }

        // odd nodes: let right half smaller
        if (pFast != nullptr)
            pSlow = pSlow->next;

        pSlow = reverseList(pSlow);
        pFast = head;

        while (pSlow != nullptr) {
            if (pFast->val != pSlow->val)
                return false;

            pFast = pFast->next;
            pSlow = pSlow->next;
        }

        return true;
    }

private:
    ListNode* reverseList(ListNode* pHead) {
        ListNode* pPrev = nullptr;
        while (pHead != nullptr) {
            ListNode* pNext = pHead->next;
            pHead->next = pPrev;
            pPrev = pHead;
            pHead = pNext;
        }
        return pPrev;
    }
};

#endif //LEETCODE_SOLUTION_H