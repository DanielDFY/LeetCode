# Validate Binary Search Tree

Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

- The left subtree of a node contains only nodes with keys **less than** the node's key.
- The right subtree of a node contains only nodes with keys **greater than** the node's key.
- Both the left and right subtrees must also be binary search trees.

> **Example:**
>
> ```
>     2
>    / \
>   1   3
> 
> Input: [2,1,3]
> Output: true
> 
>     5
>    / \
>   1   4
>      / \
>     3   6
> 
> Input: [5,1,4,null,null,3,6]
> Output: false
> Explanation: The root node's value is 5 but its right child's value is 4.
> ```



**Idea:** 

**Approach 1: Recursion**

One compares the node value with its upper and lower limits if they are available. Then one repeats the same step recursively for left and right subtrees.



Time complexity: O(N)

Space complexity: O(N)



**Approach 2: Inorder traversal**

Consider : `Left -> Node -> Right` order of in-order traversal means for BST that each element should be smaller than the next one. Hence the algorithm with O(*N*) time complexity and O(*N*) space complexity could be simple:

- Compute in-order traversal list `inorder`.
- Check if each element in `inorder` is smaller than the next one.

Note that the smallest elements can be `INT_MIN` and the value of every node should be unique.



Time complexity: O(N)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)