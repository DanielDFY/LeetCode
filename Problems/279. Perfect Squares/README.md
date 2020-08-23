# Perfect Squares

Given a positive integer *n*, find the least number of perfect square numbers (for example, `1, 4, 9, 16, ...`) which sum to *n*.

> **Example:**
>
> ```
> Input: n = 12
> Output: 3 
>   Explanation: 12 = 4 + 4 + 4.
>   
>   Input: n = 13
>   Output: 2
>   Explanation: 13 = 4 + 9.
> ```



**Idea:** 

First get all the perfect square numbers which are smaller than or equal to n.

Consider a graph which consists of number 0, 1,...,n as its nodes. Node j is connected to node i via an edge if and only if either j = i + (a perfect square number) or i = j + (a perfect square number). Starting from node 0, do the breadth-first search. If we reach node n at step m, then the least number of perfect square numbers which sum to n is m. Here since we have already obtained the perfect square numbers, we have actually finished the search at step 1.



Time complexity: O(N<sup>2</sup>).

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)