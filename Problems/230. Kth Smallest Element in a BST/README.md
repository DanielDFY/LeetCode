# Invert Binary Tree

Given a binary search tree, write a function `kthSmallest` to find the **k**th smallest element in it.

> **Example:**
>
> ```
> Input: root = [3,1,4,null,2], k = 1
>    3
>   / \
>  1   4
>   \
>    2
> Output: 1
> 
> Input: root = [5,3,6,2,4,null,null,1], k = 3
>        5
>       / \
>      3   6
>     / \
>    2   4
>   /
>  1
> Output: 3
> ```



**Idea:** 

Consider inorder iteration of BST. The value field of the kth visited node is the kth smallest element.



Time complexity: O(H + k).

Space complexity: O(H).

(where H is the height of the BST)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)