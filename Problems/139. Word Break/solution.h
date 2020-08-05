#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <unordered_set>
using std::unordered_set;

#include <algorithm>
using std::max;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if (wordDict.size() == 0) return false;

        unordered_set<string> dict;
        int longest = 0;
        for (const auto& w : wordDict) {
            dict.insert(w);
            longest = max(longest, static_cast<int>(w.size()));
        }

        int strSize = s.size();
        vector<bool> dp(strSize + 1, false);
        dp[0] = true;

        for (int i = 1; i <= strSize; ++i) {
            int limit = max(i - longest, 0);
            for (int j = i - 1; j >= limit; --j) {
                if (dp[j]) {
                    string word = s.substr(j, i - j);
                    if (dict.find(word) != dict.end()) {
                        dp[i] = true;
                        break;
                    }
                }
            }
        }

        return dp[strSize];
    }
};

#endif //LEETCODE_SOLUTION_H