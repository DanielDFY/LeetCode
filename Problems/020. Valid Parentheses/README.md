# Valid Parentheses

Given a string containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

Note that an empty string is also considered valid.

> **Example:**
>
> ```
> Input: "()"
> Output: true
> 
> Input: "()[]{}"
> Output: true
> 
> Input: "(]"
> Output: false
> ```



**Idea:**

Use a stack to record all the parentheses. Iterate the input string and push "left part" into the stack or compare each 'right part' with the top of our stack in each loop.



Time complexity: O(N)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)