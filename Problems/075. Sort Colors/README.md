# Sort Colors

Given an array with *n* objects colored red, white or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

**Note:** You are not suppose to use the library's sort function for this problem.

> **Example:**
>
> ```
> Input: [2,0,2,1,1,0]
> Output: [0,0,1,1,2,2]
> ```



**Idea:** 

Keep track of the position for the next red object to be placed at and the position for the next blue object to be placed at. While iterate the input array, swap the current object to the position we record if it is red or blue and update the stamp to next position. We don't have to deal with white objects because in the end they will be already placed properly.



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)