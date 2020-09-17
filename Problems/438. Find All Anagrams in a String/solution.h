#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> cache(26, 0);
        vector<int> result;

        if (s.empty())
            return result;

        int begin = 0, end = 0;
        int n = s.size(), count = p.size();

        for (char c : p)
            ++cache[c - 'a'];

        while (end < n) {
            if (cache[s[end++] - 'a']-- >= 1)
                --count;
            if (count == 0)
                result.push_back(begin);
            if (end - begin == p.size() && cache[s[begin++] - 'a']++ >= 0)
                ++count;
        }

        return result;
    }
};

#endif //LEETCODE_SOLUTION_H