# Best Time to Buy and Sell Stock with Cooldown

Say you have an array for which the *i*th element is the price of a given stock on day *i*.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times) with the following restrictions:

- You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
- After you sell your stock, you cannot buy stock on next day. (ie, cooldown 1 day)

> **Example:**
>
> ```
> Input: [1,2,3,0,2]
> Output: 3 
> Explanation: transactions = [buy, sell, cooldown, buy, sell]
> ```



**Idea:** 

First, think about what we can do on day `i`? You either have one stock or you don't on day `i`. For each case, you have two options, making a total of four possible actions on day `i`:

1. you have 1 stock and you sell it
2. you have 1 stock and you hold
3. you have 0 stock and you buy stock `i`
4. you have 0 stock and you do nothing , or have to take a cool-down

As you can imagine, these four actions are correlated between day `i-1` and day `i`. For example, if you take action 1 on day `i`, you then have either taken action 2 or 3 on day `i-1` but not 1 or 4. In precise, two consecutive days are related as follows:

1. if you take action 1 on day `i` ==> you have either taken action 2 or 3 on day `i-1`
2. if you take action 2 on day `i` ==> you have either taken action 2 or 3 on day `i-1`
3. if you take action 3 on day `i` ==> you must have taken action 4 on day `i-1` (you can not sell on day `i-1` due to cool down)
4. if you take action 4 on day `i` ==> you have either taken action 1 or 4 on day `i-1`

Now you want to maximize your total profit, but you don't know what action to take on day `i` such that you get the total maximum profit, so `you try all 4 actions on every day`. Suppose you take action 1 on day `i`, since there are two possible actions on day `i-1`, namely actions 2 and 3, you would definitely choose the one that makes your profit on day `i` more. Same thing for actions 2 and 4. So we now have an iterative algorithm.



Before coding, one detail to emphasize is that the initial value on day `0` is important. You basically cannot take action 1, so the corresponding profits should be 0. You cannot take action 2 in practice, but you cannot set up the profit to 0, because that means you don't have a stock to sell on day `1`. Therefore, the initial profit should be negative value of the first stock. You can also think of it as you buy the stock on day `-1` and do nothing on day `0`.



Time complexity: O(N).

Space complexity: O(1).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)