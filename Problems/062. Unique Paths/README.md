# Unique Paths

A robot is located at the top-left corner of a *m* x *n* grid.

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid.

How many possible unique paths are there?

> **Example:**
>
> ```
> Input: m = 3, n = 2
> Output: 3
> Explanation:
> From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
> 1. Right -> Right -> Down
> 2. Right -> Down -> Right
> 3. Down -> Right -> Right
> 
> Input: m = 7, n = 3
> Output: 28
> ```



**Idea:** 

Consider each position in the whole grid. Each spot in the first row or col only has one path from the origin. The number of paths from the origin to each of the rest spots is the sum of the number of paths of its left spot and top spot.



Time complexity: O(MN)

Space complexity: O(M)

(where M is the horizontal length of the grid and N is the vertical length of the grid)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)