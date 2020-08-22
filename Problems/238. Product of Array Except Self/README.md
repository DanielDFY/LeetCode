# Product of Array Except Self

Given an array `nums` of *n* integers where *n* > 1,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

> **Example:**
>
> ```
> Input:  [1,2,3,4]
> Output: [24,12,8,6]
> ```

- **Constraint:** It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.
- **Note:** Please solve it **without division** and in O(*n*).



**Idea:** 

1. Initialize the empty `answer` array where for a given index `i`, `answer[i]` would contain the product of all the numbers to the left of `i`.
2. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space.
3. Use a variable to keep track of the running product of elements to the right and we keep updating the `answer` array by doing answer[i] = answer[i] * R. For a given index `i`, `answer[i]` contains the product of all the elements to the left and `R` would contain product of all the elements to the right. We then update `R` as R = R * nums[i].



Time complexity: O(N).

Space complexity: O(1).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)