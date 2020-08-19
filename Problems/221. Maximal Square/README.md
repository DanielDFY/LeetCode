# Maximal Square

Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

> **Example:**
>
> ```
> Input: 
> 
> 1 0 1 0 0
> 1 0 1 1 1
> 1 1 1 1 1
> 1 0 0 1 0
> 
> Output: 4
> ```



**Idea:** 

Initialize an array (dp) initialized with all 0’s with the same length as the column length of the input matrix. dp(i) represents the side length of the maximum square whose bottom right corner is the cell with column i in the original matrix. Starting from index (0,0),  as we scan the elements of the original matrix across a row, we keep on updating the dp array as per the equation `dp[j]=min(dp[j-1],dp[j],prev)`, where prev refers to the old dp[j-1]. For every row, we repeat the same process and update in the same dp array. We also remember the size of the largest square found so far. In this way, we traverse the original matrix once and find out the required maximum size.



Time complexity: O(MN). Single pass.

Space complexity: O(N). Another array which stores elements in a row is used for dp.



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)