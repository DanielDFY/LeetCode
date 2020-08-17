# Kth Largest Element in an Array

Find the **k**th largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

> **Example:**
>
> ```
> Input: [3,2,1,5,6,4] and k = 2
>   Output: 5
>   
>    Input: [3,2,3,1,2,4,5,5,6] and k = 4
>    Output: 4
> ```

**Note:**
You may assume k is always valid, 1 ≤ k ≤ array's length.



**Idea:** 

Maintain a priority queue and limit its size up to k.



Time complexity: O(NlogK)

Space complexity: O(K)

(Where K is the input parameter `k` )



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)