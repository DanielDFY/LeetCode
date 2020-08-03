# Single Number

Given a **non-empty** array of integers, every element appears *twice* except for one. Find that single one.

> **Example:**
>
> ```
> Input: [2,2,1]
>    Output: 1
>    
>   Input: [4,1,2,1,2]
>  Output: 4
> ```



**Idea:** 

Consider bit operation `xor`. A integer `xor` itself equals 0. A integer `xor` 0 equals itself. So operate `xor` on all the input numbers will generate the number we want. 



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)