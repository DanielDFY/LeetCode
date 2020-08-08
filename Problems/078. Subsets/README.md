# Subsets

Given a set of **distinct** integers, *nums*, return all possible subsets (the power set).

**Note:** The solution set must not contain duplicate subsets.

> **Example:**
>
> ```
> Input: nums = [1,2,3]
> Output:
> [
>   [3],
>   [1],
>   [2],
>   [1,2,3],
>   [1,3],
>   [2,3],
>   [1,2],
>   []
> ]
> ```



**Idea:** 

Map each subset to a bitmask of length n, where `1` on the i*th* position in bitmask means the presence of `nums[i]` in the subset, and `0` means its absence. Each bitmask can be generated by the binary form of each number from 0 to the quadratic value of input size. 



Time complexity: O(1)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)