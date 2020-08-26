# Longest Increasing Subsequence

Given an unsorted array of integers, find the length of longest increasing subsequence.

> **Example:**
>
> ```
> Input: [10,9,2,5,3,7,101,18]
> Output: 4 
> Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 
> ```

**Note:**

- There may be more than one LIS combination, it is only necessary for you to return the length.
- Your algorithm should run in O(N<sup>2</sup>) complexity.



**Idea:** 

Scan the array from left to right. We also make use of a `dp` vector which stores the increasing subsequence formed by including the currently encountered element. While traversing the `nums` vector, we keep on filling the `dp` with the elements encountered so far. For the element corresponding to the `j`th index (`nums[j]`), we determine its correct position in the `dp` (say `i`th index) by making use of Binary Search( `std::lower_bound` for vector) and also insert it at the correct position. An important point to be noted is that for Binary Search, we consider only that portion of the `dp` in which we have made the updates by inserting some elements at their correct positions(which remains always sorted). Thus, only the elements up to the `i`th index in the `dp` can determine the position of the current element in it. Since, the element enters its correct position(i) in an ascending order in the `dp`, the subsequence formed so far in it is surely an increasing subsequence. Whenever this position index `i` becomes equal to the length of the LIS formed so far, it means, we need to push it into the `dp` vector.

Note: `dp` does not result in longest increasing subsequence, but length of `dp` will give you length of LIS.



Time complexity: O(NlogN).

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)