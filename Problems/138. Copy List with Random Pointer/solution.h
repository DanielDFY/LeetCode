#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr)
            return nullptr;

        for (Node* pNode = head; pNode != nullptr; pNode = pNode->next->next) {
            Node* pNew = new Node(pNode->val);
            pNew->next = pNode->next;
            pNode->next = pNew;
        }

        for (Node* pNode = head; pNode != nullptr; pNode = pNode->next->next) {
            Node* pNew = pNode->next;
            if (pNode->random != nullptr)
                pNew->random = pNode->random->next;
        }

        Node dummy(0);

        for (Node* pNode = head, *pNew = &dummy; pNode != nullptr; pNode = pNode->next, pNew = pNew->next) {
            pNew->next = pNode->next;
            pNode->next = pNew->next->next;
        }

        return dummy.next;
    }
};

#endif //LEETCODE_SOLUTION_H