# Maximum Subarray

Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

> **Example:**
>
> ```
> Input: [-2,1,-3,4,-1,2,1,-5,4],
> Output: 6
>   Explanation: [4,-1,2,1] has the largest sum = 6.
>    ```



**Idea:** 

Iterate the input vector once and keep track of a temp sum value and the largest sum value. In each loop, add current number to our temp sum. If current temp sum < 0, we should only care about the rest part of input, so reset the temp sum to 0. If temp sum >= 0,  compare it with our record and update largest sum. After the iteration, if largest sum is 0, all the numbers may be negative or 0, so return the largest one among the input numbers.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)