# 3Sum

Given an array `nums` of *n* integers, are there elements *a*, *b*, *c* in `nums` such that *a* + *b* + *c* = 0? Find all unique triplets in the array which gives the sum of zero.

**Note:**

The solution set must not contain duplicate triplets.

> **Example:**
>
> ```
> Given array nums = [-1, 0, 1, 2, -1, -4],
> 
> A solution set is:
> [
>   [-1, 0, 1],
>   [-1, -1, 2]
> ]
> ```



**Idea:**

This algorithm works by placing three pointers, `i`, `j`, and `k` at various points in the array. `i` starts off at the beginning and slowly works its way to the end. `k` points to the very last element. `j` points to where `i` has started at. We iteratively try to sum the elements at their respective indices, and each time one of the following happens:

- The sum is exactly right! We've found the answer.
- The sum was too small. Move `j` closer to the end to select the next biggest number.
- The sum was too big. Move `k` closer to the beginning to select the next smallest number.

For each `i`, the pointers of `j` and `k` will gradually get closer to each other. Eventually they will pass each other, and at that point we don't need to try anything else for that `i`, since we'd be summing the same elements, just in a different order. After that point, we try the next `i` and repeat.



Time complexity: O(n<sup>2</sup>)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)