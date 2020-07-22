# Combination Sum

Given a **set** of candidate numbers (`candidates`) **(without duplicates)** and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sums to `target`.

The **same** repeated number may be chosen from `candidates` unlimited number of times.

**Note:**

- All numbers (including `target`) will be positive integers.
- The solution set must not contain duplicate combinations.

> **Example:**
>
> ```
> Input: candidates = [2,3,6,7], target = 7,
> A solution set is:
> [
>   [7],
>   [2,2,3]
> ]
> 
> Input: candidates = [2,3,5], target = 8,
> A solution set is:
> [
>   [2,2,2,2],
>   [2,3,3],
>   [3,5]
> ]
> ```



- **Constraints:**
  - `1 <= candidates.length <= 30`
  - `1 <= candidates[i] <= 200`
  - Each element of `candidate` is unique.
  - `1 <= target <= 500`



**Idea:** 

Use the idea of backtracking (DFS). Sort the candidates first. Because all the candidates are positive, we can add the current candidate and search further when current sum is less than our target. If current sum is greater than our target then we should do backtracking because current candidate is too large and no further searching is needed. If current sum equals the target, we find a proper list of candidates.



Time complexity: O(N<sup>2</sup>)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)