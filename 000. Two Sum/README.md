# Two Sum

Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.

You may assume that each input would have **exactly** one solution, and you may not use the *same* element twice.

**Example:**

> Given nums = [2, 7, 11, 15], target = 9.
>
> Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1].



**Idea:**

To find proper pairs, we need to go through the numbers. We can use hash map to construct an one-way hash table solution. During the loop, check whether the current number's complement exists in the table. If it's true, return their index pair immediately. Otherwise put the pair [`number`, `index`] in the table and continue.



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)