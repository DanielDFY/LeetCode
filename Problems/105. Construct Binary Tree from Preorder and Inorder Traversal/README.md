# Construct Binary Tree from Preorder and Inorder Traversal

Given preorder and inorder traversal of a tree, construct the binary tree.

**Note:**
You may assume that duplicates do not exist in the tree.

> **Example:**
>
> ```
> Given:
> preorder = [3,9,20,15,7]
> inorder = [9,3,15,20,7]
> 
> Return the following binary tree:
>     3
>    / \
>   9  20
>     /  \
>    15   7
> ```



**Idea:** 

In pre-order list, the first element should be the root node, and it divide the in-order list into left and right sub-trees. We can recursively construct each node by specifying the range of elements we are processing in these two list.



Time complexity: O(N)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)