# Coin Change

You are given coins of different denominations and a total amount of money *amount*. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return `-1`.

> **Example:**
>
> ```
> Input: coins = [1, 2, 5], amount = 11
> Output: 3 
> Explanation: 11 = 5 + 5 + 1
> 
> Input: coins = [2], amount = 3
> Output: -1
> ```



**Idea:** 

First, let's define:

> *F ( S )* --- minimum number of coins needed to make change for amount *S* using coin denominations [*c<sub>0</sub>* ... *c<sub>n-1</sub>*]

We note that this problem has an optimal substructure property, which is the key piece in solving any Dynamic Programming problems. In other words, the optimal solution can be constructed from optimal solutions of its subproblems. How to split the problem into subproblems? Let's assume that we know *F(S)* where some change *val<sub>1</sub>*, *val<sub>2</sub>*, … for *S* which is optimal and the last coin's denomination is *C*. Then the following equation should be true because of optimal substructure of the problem:

> *F* ( *S* ) = *F* ( *S* − *C* ) + 1

For the iterative solution, we think in bottom-up manner. Before calculating *F(i)*, we have to compute all minimum counts for amounts up to *i*. On each iteration *i* of the algorithm *F(i)* is computed as

> min<sub>*j*=0…*n*−1</sub>*F( i − c<sub>j</sub> )* + 1



Time complexity: O(amount * N).

Space complexity: O(amount).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)