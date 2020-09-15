# Partition Equal Subset Sum

Given a **non-empty** array containing **only positive integers**, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

> **Example:**
>
> ```
> Input: [1, 5, 11, 5]
> Output: true
> Explanation: The array can be partitioned as [1, 5, 5] and [11].
> 
> Input: [1, 2, 3, 5]
> Output: false
> Explanation: The array cannot be partitioned into equal sum subsets.
> ```

**Note:**

1. Each of the array element will not exceed 100.
2. The array size will not exceed 200.



**Idea:** 

The basic idea is to understand that to partition an array into two subsets of equal sum say `subSetSum`, the `totalSum` of given array must be twice the `subSetSum`. We only need to fine if there is a possible combination which sums up to `subSetSum`. Also the size of input numbers should be even.



To find possible combination, sort the input numbers (so we can trim searching early) and do DFS from the start.



Time complexity: O(N<sup>2</sup>)

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)