# Course Schedule

There are a total of `numCourses` courses you have to take, labeled from `0` to `numCourses-1`.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: `[0,1]`

Given the total number of courses and a list of prerequisite **pairs**, is it possible for you to finish all courses?

> **Example:**
>
> ```
> Input: numCourses = 2, prerequisites = [[1,0]]
>   Output: true
>   Explanation: There are a total of 2 courses to take. 
>                To take course 1 you should have finished course 0. So it is possible.
>          
> Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
> Output: false
>    Explanation: There are a total of 2 courses to take. 
>              To take course 1 you should have finished course 0, and to take course 0 you should
>                also have finished course 1. So it is impossible.
>   ```

**Constraints:**

- The input prerequisites is a graph represented by **a list of edges**, not adjacency matrices. Read more about [how a graph is represented](https://www.khanacademy.org/computing/computer-science/algorithms/graph-representation/a/representing-graphs).
- You may assume that there are no duplicate edges in the input prerequisites.
- `1 <= numCourses <= 10^5`



**Idea:** 

This problem is equivalent to detecting a cycle in the directed graph represented by `prerequisites`. Both BFS and DFS can be used to solve it using the idea of **topological sort**. We first transform it to the adjacency-list representation and compute their in-degrees. If course `u` is a prerequisite of course `v`, then the adjacency list of `u` will contain `v`. Then do BFS for each node with 0 in-degree, for each of its adjacent nodes, if its current degree is 1, then it will have no prerequisites and should be done BFS later, otherwise decrease its degree for 1. 



Time complexity: O(V+E)

Space complexity: O(V+E)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)