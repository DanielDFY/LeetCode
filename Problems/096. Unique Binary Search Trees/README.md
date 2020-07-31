# Unique Binary Search Trees

Given *n*, how many structurally unique **BST's** (binary search trees) that store values 1 ... *n*?

> **Example:**
>
> ```
> Input: 3
> Output: 5
> Explanation:
> Given n = 3, there are a total of 5 unique BST's:
> 
>    1         3     3      2      1
>     \       /     /      / \      \
>      3     2     1      1   3      2
>     /     /       \                 \
>    2     1         2                 3
> ```

**Constraints:**

- `1 <= n <= 19`



**Idea:** 

Pick a number to be the root, the number of unique BST's under this scenario is the number of unique BST's of the left child multiply the number of unique BST's of the right child. So we can use dynamic programming. Only half of the BST's need to be calculated because of symmetry.



Time complexity: O(N)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)