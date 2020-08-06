#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <unordered_set>
using std::unordered_set;

#include <algorithm>
using std::max;


// Definition for singly-linked list.
struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* pSlow = head;
        ListNode* pFast = head;
        ListNode* pEntry = head;

        while (pFast != nullptr && pFast->next != nullptr) {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
            if (pFast == pSlow) {
                while (pSlow != pEntry) {
                    pSlow = pSlow->next;
                    pEntry = pEntry->next;
                }
                return pEntry;
            }
        }

        return nullptr;
    }
};

#endif //LEETCODE_SOLUTION_H