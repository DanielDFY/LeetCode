# Maximum Product Subarray

Given an integer array `nums`, find the contiguous subarray within an array (containing at least one number) which has the largest product.

> **Example:**
>
> ```
> Input: [2,3,-2,4]
> Output: 6
> Explanation: [2,3] has the largest product 6.
> 
> Input: [-2,0,-1]
> Output: 0
> Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
> ```



**Idea:** 

We can have two running products: `maxProd` and `minProd`. `maxProd` will track the maximum product that we can achieve and will reset whenever the current number is greater. `minProd`, on the other hand, will track the minimum product that we can achieve and will reset whenever the current number is smaller. Finally, whenever we encounter a negative number, we will swap `maxProd` and `minProd` because if `a <= b` then `-b <= -a`. We also need a variable to hold the max `runningProduct` that we have encountered.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)