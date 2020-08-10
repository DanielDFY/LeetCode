# Sort List

Sort a linked list in *O*(nlogn) time using constant space complexity.

> **Example:**
>
> ```
> Input: 4->2->1->3
> Output: 1->2->3->4
> 
> Input: -1->5->3->4->0
> Output: -1->0->3->4->5
> ```



**Idea:** 

This problem seems to be solved using recurrence and divide-and-conquer (we can use pointer `fast` and `slow` to divide the list into two part). But it consumes program stack to store the recurring function stack frame, actually it consumes o(logn) space complexity. Recursion use up-to-bottom strategy , why not try bottom-to-up.



Time complexity: O(nlogn)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)