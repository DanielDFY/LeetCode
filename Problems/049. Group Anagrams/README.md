# Group Anagrams

Given an array of strings, group anagrams together.

**Note:**

- All inputs will be in lowercase.
- The order of your output does not matter.

> **Example:**
>
> ```
> Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
> Output:
>   [
>     ["ate","eat","tea"],
>     ["nat","tan"],
>   ["bat"]
> ]
> ```



**Idea:** 

For each string, we can record it into a character count, consisting of 26 non-negative integers representing the number of each lowercase letter. Then transform the count data into a string as its key. For example, the key of `abc` can be `1#1#1#0#...0#`, the key of `aac` can be `2#0#1#0#...0#`.  This way we can gather the strings with a hash map.



Time complexity: O(NK)

Space complexity: O(NK)

(where K is the longest string in the input)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)