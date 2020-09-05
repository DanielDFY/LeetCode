# Top K Frequent Elements

Given a non-empty array of integers, return the **k** most frequent elements.

> **Example:**
>
> ```
> Input: nums = [1,1,1,2,2,3], k = 2
> Output: [1,2]
>    
>    Input: nums = [1], k = 1
>    Output: [1]
>    ```

**Note:**

- You may assume *k* is always valid, 1 ≤ *k* ≤ number of unique elements.
- Your algorithm's time complexity **must be** better than O(*n* log *n*), where *n* is the array's size.
- It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.
- You can return the answer in any order.



**Idea:** 

Approach 1: Heap

- The first step is to build a hash map `element -> its frequency`. This step takes O(*N*) time where `N` is a number of elements in the list.
- The second step is to build a heap of *size k using N elements*. To add the first `k` elements takes a linear time O(*k*) in the average case, and O(log1+log2+...+log*k*)=O(log*k*!)=O(*k*log*k*) in the worst case. After the first `k` elements we start to push and pop at each step, `N - k` steps in total. The time complexity of heap push/pop is O(log*k*) and we do it `N - k` times that means O((*N*−*k*)log*k*) time complexity. Adding both parts up, we get O(*N*log*k*) time complexity for the second step.
- The third and the last step is to convert the heap into an output array. That could be done in O(*k*log*k*) time.



Time complexity: O(Nlogk).

Space complexity: O(N + k).



Approach 2: Quickselect

- Build a hash map `element -> its frequency` and convert its keys into the array `unique` of unique elements. Note that elements are unique, but their frequencies are *not*. That means we need a partition algorithm that works fine with *duplicates*.
- Work with `unique` array. Use a partition scheme to place the pivot into its perfect position `pivot_index` in the sorted array, move less frequent elements to the left of pivot, and more frequent or of the same frequency - to the right.
- Compare `pivot_index` and `N - k`.
  - If `pivot_index == N - k`, the pivot is `N - k`*th* most frequent element, and all elements on the right are more frequent or of the same frequency. Return these top *k* frequent elements.
  - Otherwise, choose the side of the array to proceed recursively.
- We can simply make use of [std::nth_element](https://en.cppreference.com/w/cpp/algorithm/nth_element) as the partition algorithm. 



Time complexity: O(*N*) in the average case,O(*N*<sup>2</sup>) in the worst case.

Space complexity: O(N).



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)