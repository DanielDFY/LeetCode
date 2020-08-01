# Binary Tree Level Order Traversal

Given a binary tree, return the *level order* traversal of its nodes' values. (ie, from left to right, level by level).

> **Example:**
>
> ```
>    Given binary tree [3,9,20,null,null,15,7],
>        3
>       / \
>     9  20
>      /  \
>    15   7
> 
>    return its level order traversal as:
>    [
>      [3],
>      [9,20],
>      [15,7]
>    ]
> ```



**Idea:** 

Use a queue to cache the nodes in each level. For each level, first get the number of nodes we should pop out from the queue, then recursively pop out each node and push their non-null child node at the back of the queue.



Time complexity: O(N)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)