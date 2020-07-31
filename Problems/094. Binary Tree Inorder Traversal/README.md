# Binary Tree Inorder Traversal

Given a binary tree, return the *inorder* traversal of its nodes' values.

> **Example:**
>
> ```
> Input: [1,null,2,3]
>    1
>       \
>         2
>        /
>      3
>   
>   Output: [1,3,2]
>   ```



**Idea:** 

**Approach 1: Recursive**

```cpp
void inorderTraversal(vector<int>& output, TreeNode* root) {
	if (root == nullptr)
		return;

	inorderTraversal(output, root->left);
    output.push_back(root->val);
    inorderTraversal(output, root->right);
}
```

Time complexity: O(N)

Space complexity: worst case O(N), average case O(logN)



**Approach 2: Iterating method using Stack**

```cpp
vector<int> inorderTraversal(TreeNode* root) {
	vector<int> ret;
    for (stack<TreeNode*> s; !s.empty() || root != nullptr;) {
        if (root != nullptr) {
            s.push(root);
            root = root->left;
        } else {
            root = s.top();
            s.pop();
            ret.push_back(root->val);
            root = root->right;
        }
    }
    return ret;
}
```

Time complexity: O(N)

Space complexity: worst case O(N), average case O(logN)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)