# House Robber III

The thief has found himself a new place for his thievery again. There is only one entrance to this area, called the "root." Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that "all houses in this place forms a binary tree". It will automatically contact the police if two directly-linked houses were broken into on the same night.

Determine the maximum amount of money the thief can rob tonight without alerting the police.

> **Example:**
>
> ```
> Input: [3,2,3,null,3,null,1]
> 
>      3
>     / \
>    2   3
>     \   \ 
>      3   1
> 
> Output: 7 
> Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.
> 
> Input: [3,4,5,1,3,null,1]
> 
>      3
>     / \
>    4   5
>   / \   \ 
>  1   3   1
> 
> Output: 9
> Explanation: Maximum amount of money the thief can rob = 4 + 5 = 9.
> ```



**Idea:** 

At first glance, the problem exhibits the feature of "optimal substructure": if we want to rob maximum amount of money from current binary tree (rooted at `root`), we surely hope that we can do the same to its left and right subtrees.



So going along this line, let's define the function `rob(root)` which will return the maximum amount of money that we can rob for the binary tree rooted at `root`; the key now is to construct the solution to the original problem from solutions to its subproblems, i.e., how to get `rob(root)` from `rob(root.left), rob(root.right), ...` etc.



Apparently the analyses above suggest a recursive solution. And for recursion, it's always worthwhile figuring out the following two properties:

1. Termination condition: when do we know the answer to `rob(root)` without any calculation? Of course when the tree is empty ---- we've got nothing to rob so the amount of money is zero.
2. Recurrence relation: i.e., how to get `rob(root)` from `rob(root.left), rob(root.right), ...` etc. From the point of view of the tree root, there are only two scenarios at the end: `root` is robbed or is not. If it is, due to the constraint that "we cannot rob any two directly-linked houses", the next level of subtrees that are available would be the four "**grandchild-subtrees**" (`root.left.left, root.left.right, root.right.left, root.right.right`). However if `root` is not robbed, the next level of available subtrees would just be the two "**child-subtrees**" (`root.left, root.right`). We only need to choose the scenario which yields the larger amount of money.



But we only considered the aspect of "optimal substructure". Think little about the possibilities of overlapping of the subproblems. For example, to obtain `rob(root)`, we need `rob(root.left), rob(root.right), rob(root.left.left), rob(root.left.right), rob(root.right.left), rob(root.right.right)`; but to get `rob(root.left)`, we also need `rob(root.left.left), rob(root.left.right)`, similarly for `rob(root.right)`. The naive solution above computed these subproblems repeatedly, which resulted in bad time performance.



For each tree root, there are two scenarios: it is robbed or is not. `rob(root)` does not distinguish between these two cases, so "information is lost as the recursion goes deeper and deeper", which results in repeated subproblems. If we were able to maintain the information about the two scenarios for each tree root, let's see how it plays out. Redefine `rob(root)` as a new function which will return an array of two elements, the first element of which denotes the maximum amount of money that can be robbed if `root` is **not robbed**, while the second element signifies the maximum amount of money robbed if it is **robbed**.



Let's relate `rob(root)` to `rob(root.left)` and `rob(root.right)...`, etc. For the 1st element of `rob(root)`, we only need to sum up the larger elements of `rob(root.left)` and `rob(root.right)`, respectively, since `root` is not robbed and we are free to rob its left and right subtrees. For the 2nd element of `rob(root)`, however, we only need to add up the 1st elements of `rob(root.left)` and `rob(root.right)`, respectively, plus the value robbed from `root` itself, since in this case it's guaranteed that we cannot rob the nodes of `root.left` and `root.right`.



Time complexity: O(N).

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)