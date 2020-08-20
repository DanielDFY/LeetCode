# Invert Binary Tree

Invert a binary tree.

> **Example:**
>
> ```
> Input: 
>      4
>    /   \
>   2     7
>  / \   / \
> 1   3 6   9
> 
> Output:
>      4
>    /   \
>   7     2
>  / \   / \
> 9   6 3   1
> ```



**Idea:** 

For each node, swap its children nodes.



Time complexity: O(N).

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)