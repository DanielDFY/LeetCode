# Remove Nth Node From End of List

Given a linked list, remove the *n*-th node from the end of list and return its head.

**Note:**

Given *n* will always be valid.

> **Example:**
>
> ```
> Given linked list: 1->2->3->4->5, and n = 2.
> 
> After removing the second node from the end, the linked list becomes 1->2->3->5.
> ```



**Idea:**

First we will add an auxiliary "dummy" node, which points to the list head. The "dummy" node is used to simplify some corner cases such as a list with only one node, or removing the head of the list. Then we could use two pointers. The first pointer advances the list by n steps from the beginning, while the second pointer starts from the beginning of the list. Now, both pointers are exactly separated by n nodes apart. We maintain this constant gap by advancing both pointers together until the first pointer arrives the last node. The second pointer will be pointing at the n+1 node counting from the last. To remove our target, we relink the next pointer of the node referenced by the second pointer to point to the node's next next node.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)