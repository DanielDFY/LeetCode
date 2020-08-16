# Implement Trie (Prefix Tree)

Implement a trie with `insert`, `search`, and `startsWith` methods.

> **Example:**
>
> ```
> Trie trie = new Trie();
>   
>   trie.insert("apple");
>    trie.search("apple");   // returns true
>    trie.search("app");     // returns false
> trie.startsWith("app"); // returns true
> trie.insert("app");   
>    trie.search("app");     // returns true
>    ```

- **Note:**
  - You may assume that all inputs are consist of lowercase letters `a-z`.
  - All inputs are guaranteed to be non-empty strings.



**Idea:** 

**Trie node structure**

Trie is a rooted tree. Its nodes have the following fields:

- Maximum of R*R* links to its children, where each link corresponds to one of R*R* character values from dataset alphabet. In this article we assume that R*R* is 26, the number of lowercase latin letters.
- Boolean field which specifies whether the node corresponds to the end of the key, or is just a key prefix.

Time complexity: O(M)

Space complexity: O(M) (In the worst case newly inserted key doesn't share a prefix with the the keys already inserted in the trie.)



**Insertion of a key to a trie**

We insert a key by searching into the trie. We start from the root and search a link, which corresponds to the first key character. There are two cases :

- A link exists. Then we move down the tree following the link to the next child level. The algorithm continues with searching for the next key character.
- A link does not exist. Then we create a new node and link it with the parent's link matching the current key character. We repeat this step until we encounter the last character of the key, then we mark the current node as an end node and the algorithm finishes.

Time complexity: O(M)

Space complexity: O(1)



**Search for a key in a trie**

Each key is represented in the trie as a path from the root to the internal node or leaf. We start from the root with the first key character. We examine the current node for a link corresponding to the key character. There are two cases :

- A link exist. We move to the next node in the path following this link, and proceed searching for the next key character.
- A link does not exist. If there are no available key characters and current node is marked as `isEnd` we return true. Otherwise there are possible two cases in each of them we return false :
  - There are key characters left, but it is impossible to follow the key path in the trie, and the key is missing.
  - No key characters left, but current node is not marked as `isEnd`. Therefore the search key is only a prefix of another key in the trie.

Time complexity: O(M)

Space complexity: O(1)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)