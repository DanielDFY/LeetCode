# Linked List Cycle

Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list, we use an integer `pos` which represents the position (0-indexed) in the linked list where tail connects to. If `pos` is `-1`, then there is no cycle in the linked list.

> **Example:**
>
> ```
> Input: head = [3,2,0,-4], pos = 1
> Output: true
> Explanation: There is a cycle in the linked list, where tail connects to the second node.
> 
> Input: head = [1,2], pos = 0
> Output: true
> Explanation: There is a cycle in the linked list, where tail connects to the first node.
> 
> Input: head = [1], pos = -1
> Output: false
> Explanation: There is no cycle in the linked list.
> ```



**Idea:** 

Use two pointers, one is slow (every time move one step to its next), the other is fast (every time move two steps to the next of its next). Move them from the head of the list, if they can move to the same node, there must be a cycle in the list, otherwise there is no cycle.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)