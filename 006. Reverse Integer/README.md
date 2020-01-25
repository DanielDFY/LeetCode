# Reverse Integer

Given a 32-bit signed integer, reverse digits of an integer.

> **Example 1:**
>
> ```
> Input: 123
> Output: 321
> ```
>
> **Example 2:**
>
> ```
> Input: -123
> Output: -321
> ```
>
> **Example 3:**
>
> ```
> Input: 120
> Output: 21
> ```

**Note:**
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31, 2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.



**Idea:**

Highest digit => lowest digit,  lowest digit => Highest digit. We can make use of `%` and `/` during each loop to get proper digit and operate moving. Sign will be automatically handled.

```cpp
for(result = 0; x != 0; x /= 10)
	result = result * 10 + x % 10;
```

To check if overflows, use `long` instead of `int` and compare the result with `INT_MAX`.

```cpp
return (result > INT32_MAX) || (result < INT32_MIN) ? 0 : result;
```



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)