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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* pDummy = new ListNode(0);
        ListNode* pNode = pDummy;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                pNode->next = l1;
                l1 = l1->next;
            }
            else {
                pNode->next = l2;
                l2 = l2->next;
            }

            pNode = pNode->next;
        }

        if (l1 != nullptr)
            pNode->next = l1;
        else
            pNode->next = l2;

        ListNode* ret = pDummy->next;
        delete(pDummy);
        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H