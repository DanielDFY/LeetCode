#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;
#include <unordered_map>
using std::unordered_map;
#include <algorithm>
using std::max;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, size_t> trace;
        size_t start = 0, ret = 0;
        size_t strSize = s.size();
        for (size_t i = 0; i < strSize; ++i) {
            char c = s[i];
            auto found = trace.find(c);
            if (found != trace.end() && found->second >= start) {
                ret = max(ret, i - start);
                start = found->second + 1;
            }
            trace[c] = i;
        }
        return max(ret, strSize - start);
    }
};

#endif //LEETCODE_SOLUTION_H