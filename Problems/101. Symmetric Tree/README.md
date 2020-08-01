# Symmetric Tree

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

> **Example:**
>
> ```
>    This binary tree [1,2,2,3,4,4,3] is symmetric:
>        1
>      / \
>   2   2
>  / \ / \
> 3  4 4  3
> 
>    But the following [1,2,2,null,3,null,3] is not:
>        1
>      / \
>      2   2
>       \   \
>    3    3
> ```



**Idea:** 

Recursively compare left and right sub-tree symmetrically. 



Time complexity: O(N), because we traverse the entire input tree once.

Space complexity: O(N) because the number of recursive calls is bound by the height of the tree. In the worst case, the tree is linear and the height is in O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)