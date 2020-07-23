# Permutations

Given a collection of **distinct** integers, return all possible permutations.

> **Example:**
>
> ```
> Input: [1,2,3]
> Output:
> [
>     [1,2,3],
>     [1,3,2],
>   [2,1,3],
>   [2,3,1],
>   [3,1,2],
>   [3,2,1]
> ]
>   ```



**Idea:** 

To construct permutations, we need to exchange the integers. We can do it recursively: for each integer, switch it with one of the integers behind, construct the permutations of the sub group (all integers behind), and swap them back to do the same thing for another integer behind. If meet the final integer, we got one of the permutations. 



Time complexity: O(N!)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)