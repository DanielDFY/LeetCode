# Reverse Linked List

Reverse a singly linked list.

> **Example:**
>
> ```
> Input: 1->2->3->4->5->NULL
>   Output: 5->4->3->2->1->NULL
>   ```



**Idea:** 

Iterate from the head of the list and keep track of 3 pointers: previous, current and next. So for each node we can reverse its field `next`.

 

Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)