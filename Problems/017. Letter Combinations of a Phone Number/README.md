# Letter Combinations of a Phone Number

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

![keyboard](./Telephone-keypad.png)

**Note:**

Although the above answer is in lexicographical order, your answer could be in any order you want.

> **Example:**
>
> ```
> Input: "23"
> Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
> ```



**Idea:**

It's easy to get the mapping:

```cpp
array<string, 10> map{"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
```

In the outer loop, iterate the input string:

```cpp
vector<string> ret;
if (digits.empty())
	return ret;
else
	ret.push_back("");

for (auto digit : digits) {
	int index = digit - '0';
    // ...
}

return ret;
```

In the inner loop, iterate the corresponding string from the mapping and combine each char with former prefix we got:

```cpp
    vector<string> tmp;
    for (auto c : map[index]) {
        for (const auto& prefix : ret) {
            tmp.push_back(prefix + c);
        }
    }
    ret = tmp;
```



Time complexity: O(3<sup>N</sup>×4<sup>M</sup>)

Space complexity: O(3<sup>N</sup>×4<sup>M</sup>)

(where `N` is the number of digits in the input that maps to 3 letters, `M` is the number of digits in the input that maps to 4 letters)



**Solution:** [C++](./solution.h)	[Test](./Test.cpp)