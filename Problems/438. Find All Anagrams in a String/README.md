# Find All Anagrams in a String

Given a string **s** and a **non-empty** string **p**, find all the start indices of **p**'s anagrams in **s**.

Strings consists of lowercase English letters only and the length of both strings **s** and **p** will not be larger than 20,100.

The order of output does not matter.

> **Example:**
>
> ```
> Input:
> s: "cbaebabacd" p: "abc"
> 
> Output:
> [0, 6]
> 
> Explanation:
> The substring with start index = 0 is "cba", which is an anagram of "abc".
> The substring with start index = 6 is "bac", which is an anagram of "abc".
> 
> Input:
> s: "abab" p: "ab"
> 
> Output:
> [0, 1, 2]
> 
> Explanation:
> The substring with start index = 0 is "ab", which is an anagram of "ab".
> The substring with start index = 1 is "ba", which is an anagram of "ab".
> The substring with start index = 2 is "ab", which is an anagram of "ab".
> ```



**Idea:** 

Consider *Sliding Window*:

Given pattern string `s` and string to be searched `p`, fill vector of counters for pattern string `pv` and vector of counters for the sliding window `sv` with 0. Window is moving from left to right across the string `s`. Window size is `p.size()`, so `s.size() - p.size()` moves are made. (Both `pv` and `sv` have length of 26 because strings only consists of lowercase E snglish letters)

As window extends one step to the right, counter for `s[i]` is incremented. Since we added one element to the right, one element to the left should be discarded (counter for `s[i - p.size()]` is decremented).

Every time after a move to the right, if the anagram can be composed, add current position of window's left point to the result (pattern match success).



Time complexity: O(N)

Space complexity: O(1) (ignore the memory used by returned result).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)