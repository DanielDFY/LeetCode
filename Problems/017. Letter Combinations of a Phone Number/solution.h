#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <array>
using std::array;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ret;
        if (digits.empty())
            return ret;
        
        ret.push_back("");
        for (auto digit : digits) {
            int index = digit - '0';
            vector<string> tmp;
            for (auto c : map[index]) {
                for (const auto& pre : ret) {
                    tmp.push_back(pre + c);
                }
            }
            ret = tmp;
        }

        return ret;
    }

private:
    array<string, 10> map{ "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
};

#endif //LEETCODE_SOLUTION_H