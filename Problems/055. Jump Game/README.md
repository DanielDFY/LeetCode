# Jump Game

Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

> **Example:**
>
> ```
> Input: nums = [2,3,1,1,4]
> Output: true
> Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
> 
> Input: nums = [3,2,1,0,4]
> Output: false
> Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
> ```



**Idea:** 

We can get the result in one iteration. Keeping track of the farthest position `max` we currently can arrive at, for each position `i`, first compare i with the record, if `i > max` then `i` can not be reached and return false. Otherwise update record max to `max(i + nums[i], max)`. If `i <= max` is still true at the end of the iteration, there must be a valid path and we can return true.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)