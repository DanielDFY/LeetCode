# Counting Bits

Given a non negative integer number **num**. For every numbers **i** in the range **0 ≤ i ≤ num** calculate the number of 1's in their binary representation and return them as an array.

> **Example:**
>
> ```
> Input: 2
> Output: [0,1,1]
>    
>    Input: [3,4,5,1,3,null,1]
>    
>    Input: 5
>    Output: [0,1,1,2,1,2]
> ```



**Idea:** 

For any positive integer `i`, `i&(i-1)` drops the lowest set bit. 

> For example:
>
> If  `i` = 14, its binary representation is 1110, and for `i-1` it's 1101. Then the binary representation of `i&(i-1)` is 1100.
>
> If  `i` = 15, its binary representation is 1111, and for `i-1` it's 1100. Then the binary representation of `i&(i-1)` is 1100.

The number of set bits in its binary representation `f(i)` decreases one, so `f(i)= f(i&(i-1)) + 1`.



Time complexity: O(N).

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)