# Majority Element

Given an array of size *n*, find the majority element. The majority element is the element that appears **more than** `⌊ n/2 ⌋` times.

You may assume that the array is non-empty and the majority element always exist in the array.

> **Example:**
>
> ```
> Input: [3,2,3]
> Output: 3
> 
> Input: [2,2,1,1,1,2,2]
> Output: 2
> ```



**Idea:** 

Consider Boyer-Moore Voting. If we count instances of the majority element as +1 and instances of any other element as -1, summing them would make it obvious that the majority element is indeed the majority element. Because the array is non-empty and the majority element always exist in the array, we can just keep track of the element that has positive count in only one pass.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)