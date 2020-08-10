#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

//Definition for singly-linked list.
struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int size = 0;
        for (ListNode* curr = head; curr != nullptr; curr = curr->next) {
            ++size;
        }

        ListNode dummy(0);
        dummy.next = head;
        for (int length = 1; length < size; length <<= 1) {
            ListNode* curr = dummy.next;
            ListNode* tail = &dummy;
            while (curr != nullptr) {
                ListNode* left = curr;
                ListNode* right = splitList(left, length);
                curr = splitList(right, length);
                mergeList(left, right, tail);
            }
        }

        return dummy.next;
    }

private:
    ListNode* splitList(ListNode* head, int length) {
        for (int i = 1; head != nullptr && i < length; ++i) {
            head = head->next;
        }

        if (head == nullptr) return nullptr;

        ListNode* ret = head->next;
        head->next = nullptr;
        return ret;
    }

    void mergeList(ListNode* head1, ListNode* head2, ListNode*& appendTail) {
        while (head1 != nullptr && head2 != nullptr) {
            if (head1->val < head2->val) {
                appendTail->next = head1;
                head1 = head1->next;
            }
            else {
                appendTail->next = head2;
                head2 = head2->next;
            }
            appendTail = appendTail->next;
        }

        appendTail->next = (head1 != nullptr ? head1 : head2);
        while (appendTail->next != nullptr) {
            appendTail = appendTail->next;
        }
    }
};

#endif //LEETCODE_SOLUTION_H