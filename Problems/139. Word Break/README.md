# Copy List with Random Pointer

Given a **non-empty** string *s* and a dictionary *wordDict* containing a list of **non-empty** words, determine if *s* can be segmented into a space-separated sequence of one or more dictionary words.

**Note:**

- The same word in the dictionary may be reused multiple times in the segmentation.
- You may assume the dictionary does not contain duplicate words.

> **Example:**
>
> ```
> Input: s = "leetcode", wordDict = ["leet", "code"]
> Output: true
> Explanation: Return true because "leetcode" can be segmented as "leet code".
> 
> Input: s = "applepenapple", wordDict = ["apple", "pen"]
> Output: true
> Explanation: Return true because "applepenapple" can be segmented as "apple pen apple". Note that you are allowed to reuse a dictionary word.
> 
> Input: s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
> Output: false
> ```



**Idea:** 

We use a boolean vector dp[]. dp[***i***] is set to true if a valid word (word sequence) ends there. The optimization is to look from current position ***i*** back and only substring and do dictionary look up in case the preceding position ***j*** with *dp[**j**] == true* is found.



Time complexity: O(N<sup>2</sup>)

Space complexity: O(N)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)