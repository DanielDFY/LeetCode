# Queue Reconstruction by Height

Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers `(h, k)`, where `h` is the height of the person and `k` is the number of people in front of this person who have a height greater than or equal to `h`. Write an algorithm to reconstruct the queue.

> **Example:**
>
> ```
> Input:
> [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
> 
> Output:
> [[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
> ```

**Note:**

* The number of people is less than 1,100.



**Idea:** 

The real problem is to find **next empty index**. For example, [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]], if we put the first element, then the array becomes [ _, _, _, _, [4, 4], _, _ ]. So, next index mapping should be 0->0, 1->1, 2->2, 3->3, **4->5, 5->6** (here, we have changes). Instead of using an iteration to find the next index, we can use a **Segment Tree**: we keep number of empty spaces to the left child of each parent. By this way we can compute the next index in O(logN).



Basic algorithm in human language:

> 1. Divide the array into 2 halves. **How many empty spaces do we have in the left half?**
> 2. If the number of spaces in the left half is greater than the number of spaces should be, then take the left half, otherwise take the right half.
> 3. Repeat from step 1.



Also, we need a special sorting. If we have equal heights, then the first take rightmost one.



Time complexity: O(NlogN)

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)