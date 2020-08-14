# Number of Islands

Given a 2d grid map of `'1'`s (land) and `'0'`s (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

> **Example:**
>
> ```
> Input: grid = [
>   ["1","1","1","1","0"],
>   ["1","1","0","1","0"],
>   ["1","1","0","0","0"],
>   ["0","0","0","0","0"]
> ]
> Output: 1
>           
> Input: grid = [
>   ["1","1","0","0","0"],
>   ["1","1","0","0","0"],
>   ["0","0","1","0","0"],
>   ["0","0","0","1","1"]
> ]
> ```



**Idea:** 

Do DFS at each position. For each `'1'` node, increase our counter and change all adjacent `'1'`s into `'0'`s during each searching.

 

Time complexity: O(N<sup>2</sup>)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)