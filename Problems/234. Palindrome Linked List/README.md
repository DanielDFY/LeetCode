# Palindrome Linked List

Given a singly linked list, determine if it is a palindrome.

> **Example:**
>
> ```
> Input: 1->2
>    Output: false
>   
>  Input: 1->2->2->1
>   Output: true
>    ```



**Idea:** 

Divide the input list into two part with the same length (ignore the middle node if the length of input list is odd). Reverse one of them and compare their nodes sequentially.



Time complexity: O(N).

Space complexity: O(1).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)