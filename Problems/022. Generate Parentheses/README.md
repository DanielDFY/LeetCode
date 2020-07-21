# Generate Parentheses

Given *n* pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

> **Example:**
>
> ```
> given n = 3, a solution set is:
> [
>   "((()))",
>   "(()())",
>   "(())()",
>   "()(())",
>   "()()()"
> ]
> ```



**Idea:**

Add `(` or `)` when we know it will remain a valid sequence. We can do this by keeping track of the number of opening and closing brackets we have placed so far.

We can start an opening bracket if we still have one (of `n`) left to place. And we can start a closing bracket if it would not exceed the number of opening brackets.



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)