# Merge Two Sorted Lists

Merge two sorted linked lists and return it as a new **sorted** list. The new list should be made by splicing together the nodes of the first two lists.

> **Example:**
>
> ```
> Input: 1->2->4, 1->3->4
> Output: 1->1->2->3->4->4
> ```



**Idea:**

With the help of a dummy node, we can easily use loop to do merging:

```cpp
ListNode* pDummy = new ListNode(0);
ListNode* pNode = pDummy;
while (l1 != nullptr && l2 != nullptr) {
	if (l1->val < l2->val) {
		pNode->next = l1;
        l1 = l1->next;
	} else {
		pNode->next = l2;
		l2 = l2->next;
	}

	pNode = pNode->next;
}

if (l1 != nullptr)
	pNode->next = l1;
else
	pNode->next = l2;

ListNode* ret = pDummy->next;
delete(pDummy);
return ret;
```



Besides loop, we can also use recursive method:

```cpp
if(l1 == NULL) return l2;
if(l2 == NULL) return l1;

if(l1->val < l2->val) 
{
    l1->next = mergeTwoLists(l1->next, l2);
    return l1;
} 
else 
{
    l2->next = mergeTwoLists(l2->next, l1);
    return l2;
}
```



Time complexity: O(N)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)