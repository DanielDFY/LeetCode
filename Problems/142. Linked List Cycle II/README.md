# Linked List Cycle II

Given a linked list, return the node where the cycle begins. If there is no cycle, return `null`.

To represent a cycle in the given linked list, we use an integer `pos` which represents the position (0-indexed) in the linked list where tail connects to. If `pos` is `-1`, then there is no cycle in the linked list.

**Note:** Do not modify the linked list.

> **Example:**
>
> ```
> Input: head = [3,2,0,-4], pos = 1
> Output: tail connects to node index 1
> Explanation: There is a cycle in the linked list, where tail connects to the second node.
> 
> Input: head = [1,2], pos = 0
> Output: tail connects to node index 0
> Explanation: There is a cycle in the linked list, where tail connects to the first node.
> 
> Input: head = [1], pos = -1
> Output: no cycle
> Explanation: There is no cycle in the linked list.
> ```



**Idea:** 

Use two pointers, one is slow (every time move one step to its next), the other is fast (every time move two steps to the next of its next). Move them from the head of the list, if they can move to the same node, there must be a cycle in the list, otherwise there is no cycle.



Consider the steps these two pointers moved when a cycle exists. If `pSlow` moved `x` steps, then `pFast` moved `2x` steps, so the length of the cycle should be `2x - x = x`. So if we move `pSlow` and a new pointer from head of the list, one step each time, when they meet at a node then it is the entry of the cycle.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)