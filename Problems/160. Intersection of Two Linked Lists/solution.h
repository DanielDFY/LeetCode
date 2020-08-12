#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
using std::stack;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* pA = headA;
        ListNode* pB = headB;

        int lenA = 0;
        int lenB = 0;
        while (pA != nullptr) {
            ++lenA;
            pA = pA->next;
        }
        while (pB != nullptr) {
            ++lenB;
            pB = pB->next;
        }

        if (pA != pB)
            return nullptr;

        if (lenA > lenB) {
            int diff = lenA - lenB;
            for (int i = 0; i < diff; ++i) {
                headA = headA->next;
            }
        }
        else {
            int diff = lenB - lenA;
            for (int i = 0; i < diff; ++i) {
                headB = headB->next;
            }
        }

        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};
#endif //LEETCODE_SOLUTION_H