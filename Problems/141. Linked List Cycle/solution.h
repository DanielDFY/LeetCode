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
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return false;

        ListNode* pSlow = head;
        ListNode* pFast = head;
        while (pFast != nullptr && pFast->next != nullptr) {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
            if (pFast == pSlow)
                return true;
        }

        return false;
    }
};

#endif //LEETCODE_SOLUTION_H