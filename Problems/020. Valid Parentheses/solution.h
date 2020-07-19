#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;

#include <stack>
using std::stack;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parenthesesStack;

        for (const auto& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                parenthesesStack.push(c);
            }
            else if (c == ')') {
                if (!parenthesesStack.empty() && parenthesesStack.top() == '(') {
                    parenthesesStack.pop();
                }
                else {
                    return false;
                }
            }
            else if (c == '}') {
                if (!parenthesesStack.empty() && parenthesesStack.top() == '{') {
                    parenthesesStack.pop();
                }
                else {
                    return false;
                }
            }
            else if (c == ']') {
                if (!parenthesesStack.empty() && parenthesesStack.top() == '[') {
                    parenthesesStack.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return parenthesesStack.empty();
    }
};

#endif //LEETCODE_SOLUTION_H