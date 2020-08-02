# Flatten Binary Tree to Linked List

Given a binary tree, flatten it to a linked list in-place.

> **Example:**
>
> ```
> Given the following tree:
>     1
>    / \
>   2   5
>  / \   \
> 3   4   6
> 
> The flattened tree should look like:
> 1
>  \
>   2
>    \
>     3
>      \
>       4
>        \
>         5
>          \
>           6
> ```



**Idea:** 

To construct flattened linked list, for each node N, move its right sub-tree to the right child of the right most node of the left sub-tree of N, then move the left sub-tree to the right child of N.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)