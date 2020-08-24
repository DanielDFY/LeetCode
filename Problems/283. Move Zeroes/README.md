# Move Zeroes

Given an array `nums`, write a function to move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

> **Example:**
>
> ```
> Input: [0,1,0,3,12]
> Output: [1,3,12,0,0]
>   ```

**Note**:

1. You must do this **in-place** without making a copy of the array.
2. Minimize the total number of operations.



**Idea:** 

Iterate the input vector only once and keep track of the index of the last non-zero element we know. If current number is not zero, move it to the position we record and update the tail index, otherwise set current element to zero.



Time complexity: O(N).

Space complexity: O(1).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)