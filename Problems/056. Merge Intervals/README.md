# Merge Intervals

Given a collection of intervals, merge all overlapping intervals.

> **Example:**
>
> ```
> Input: [[1,3],[2,6],[8,10],[15,18]]
> Output: [[1,6],[8,10],[15,18]]
> Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
> 
> Input: [[1,4],[4,5]]
> Output: [[1,5]]
> Explanation: Intervals [1,4] and [4,5] are considered overlapping.
> ```



**Idea:** 

If we sort the intervals by their `start` value, then each set of intervals that can be merged will appear as a contiguous "run" in the sorted list. Go through the intervals and keep track of a temp "merged interval". If the `start` value of the "new" interval exceeds the `end` value of our temp interval, the merging of the temp interval should be completed and store in the output, and the current interval becomes our new temp interval. Otherwise if the `end` value exceeds the `end` value of our temp interval, we should merge them together.



Time complexity: O(NlogN)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)