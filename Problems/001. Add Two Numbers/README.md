# Add Two Numbers

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order** and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

> **Example:**
>
> ```
> Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
> Output: 7 -> 0 -> 8
> Explanation: 342 + 465 = 807.
> ```



**Idea:**

Every time we need to calculate carry and remainder. `div_t` from STL can be useful:

```
 17 / 5 == 3 remainder 2
```

can be represented as:

```cpp
 div_t result = div(17, 5);	// result.quot = 3, result.rem = 2
```

Because this problem is based on decimal base, in every loop we need to check if sum is larger than 10.

```cpp
// carry + l1
if (l1) {
  sum.quot += l1->val;
  l1 = l1->next;
}
// carray + l1 + l2
if (l2) {
  sum.quot += l2->val;
  l2 = l2->next;
}
// calculate new carry and remainder
sum = div(sum.quot, 10);
// put remainder into list
tail->next = new ListNode(sum.rem);
```



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)