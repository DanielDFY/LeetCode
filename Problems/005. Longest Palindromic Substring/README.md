# Longest Palindromic Substring

Given a string **s**, find the longest palindromic substring in **s**. You may assume that the maximum length of **s** is 1000.

> **Example 1:**
>
> ```
> Input: "babad"
> Output: "bab"
> Note: "aba" is also a valid answer.
> ```
>
> **Example 2:**
>
> ```
> Input: "cbbd"
> Output: "bb" 
> ```



**Idea:**

Suppose S(i, j) is the substring of given string from index i to index j, there are two base palindromic cases:

* Single character, such as S(i, i).
* Substring with two characters, such as S(i, i + 1) when S[i] == S[i + 1].

To expand these base cases, we can check if S(i, j) = (S(i + 1, j - 1) && (S[i] == S[j])) is palindromic. According to the two base cases, two different cases should be handled(odd or even). Only the final begin and end indices need to be recorded.



Time complexity: O(n<sup>2</sup>)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)