# Word Search

Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

> **Example:**
>
> ```
> board =
> [
>   ['A','B','C','E'],
>     ['S','F','C','S'],
>     ['A','D','E','E']
>   ]
>   
>   Given word = "ABCCED", return true.
>   Given word = "SEE", return true.
>   Given word = "ABCB", return false.
>   ```

**Constraints:**

- `board` and `word` consist only of lowercase and uppercase English letters.
- `1 <= board.length <= 200`
- `1 <= board[i].length <= 200`
- `1 <= word.length <= 10^3`



**Idea:** 

Do `DFS` from each position in the grid. Mark visited letter as `#` if it is valid (`board` and `word` consist only of lowercase and uppercase English letters). If any deeper search is invalid, restore the letter before backtracking.



Time complexity: O(KN)

Space complexity: O(1)

(where K is the length of `word` and N is the number of elements in `board`)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)