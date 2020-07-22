# Find First and Last Position of Element in Sorted Array

Given an array of integers `nums` sorted in ascending order, find the starting and ending position of a given `target` value.

Your algorithm's runtime complexity must be in the order of *O*(log *n*).

If the target is not found in the array, return `[-1, -1]`.

> **Example:**
>
> ```
> Input: nums = [5,7,7,8,8,10], target = 8
> Output: [3,4]
>   
>   Input: nums = [5,7,7,8,8,10], target = 6
>   Output: [-1,-1]
>   ```



**Constraints:**

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `nums` is a non decreasing array.
- `-10^9 <= target <= 10^9`



**Idea:** 

Use binary search to find the left bound and the right bound, where numbers between these two boundaries are equal to the target.



Time complexity: O(log *n*)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)