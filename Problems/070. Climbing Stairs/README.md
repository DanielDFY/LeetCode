# Climbing Stairs

You are climbing a stair case. It takes *n* steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

> **Example:**
>
> ```
> Input: 2
> Output: 2
> Explanation: There are two ways to climb to the top.
> 1. 1 step + 1 step
> 2. 2 steps
> 
> Input: 3
> Output: 3
> Explanation: There are three ways to climb to the top.
> 1. 1 step + 1 step + 1 step
> 2. 1 step + 2 steps
> 3. 2 steps + 1 step
> ```

**Constraints:**

- `1 <= n <= 45`



**Idea:** 

Given n stairs, the number of ways to climb to the top is the sum of ways of (n - 1) stairs and (n - 2) stairs, which is similar to Fibonacci number. So we can keep track of the number of steps for (n - 1) stairs and (n - 2) stairs, compute the number of ways for current n and increase n for next round, until n equals our input stairs.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)