#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <unordered_map>
using std::unordered_map;

#include <string>
using std::string;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        if (strs.empty())
            return ret;

        unordered_map<string, vector<string>> cache;
        int count[26];
        int countSize = 26 * sizeof(int);
        for (const auto& str : strs) {
            memset(count, 0, countSize);
            for (auto c : str) {
                ++count[c - 'a'];
            }

            string key{ "" };
            for (int i = 0; i < 26; ++i) {
                key += '#';
                key += count[i];
            }

            auto found = cache.find(key);
            if (found == cache.end()) {
                vector<string> value{ str };
                cache.emplace(key, value);
            }
            else {
                (*found).second.push_back(str);
            }
        }

        for (const auto& pair : cache) {
            ret.push_back(pair.second);
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H