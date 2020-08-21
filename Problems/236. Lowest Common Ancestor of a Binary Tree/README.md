# Palindrome Linked List

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the [definition of LCA on Wikipedia](https://en.wikipedia.org/wiki/Lowest_common_ancestor): “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow **a node to be a descendant of itself**).”

> **Example:**
>
> ```
> Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
> Output: 3
> Explanation: The LCA of nodes 5 and 1 is 3.
> 
> Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
> Output: 5
> Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
> ```

**Note:**

- All of the nodes' values will be unique.
- p and q are different and both values will exist in the binary tree.



**Idea:** 

1. Start traversing the tree from the root node.
2. If the current node itself is null or one of `p` or `q`, return this node. Otherwise continue the search in the left and right branches.
3. If either of the left or the right branch returns a node instead of null, this means one of the two nodes was found below.
4. If at any point in the traversal, both nodes have been found, then the current node is the lowest common ancestor.



Time complexity: O(N).

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)