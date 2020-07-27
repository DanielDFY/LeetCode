# Minimum Path Sum

Given a *m* x *n* grid filled with non-negative numbers, find a path from top left to bottom right which *minimizes* the sum of all numbers along its path.

**Note:** You can only move either down or right at any point in time.

> **Example:**
>
> ```
> Input:
> [
>   [1,3,1],
>   [1,5,1],
>   [4,2,1]
> ]
> Output: 7
> Explanation: Because the path 1→3→1→1→1 minimizes the sum.
> ```



**Idea:** 

Consider each position in the whole grid. Each spot in the first row or column only has one path from the origin. The path with smallest sum from the origin to each of the rest spots is the smaller one of the sum of the two paths from its left spot and top spot.



Time complexity: O(MN)

Space complexity: O(1)

(where M is the horizontal length of the grid and N is the vertical length of the grid)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)