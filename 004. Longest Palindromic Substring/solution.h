#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;

class Solution {
private:
    void longestPalindrome(const string& s, int b, int e, int& begin, int& end) {
        int len = s.size();
        while (b >= 0 && e < len && s[b] == s[e])
            --b, ++e;
        if (e - ++b > end - begin) {
            begin = b;
            end = e;
        }
    }

public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len == 0) return s;
        int begin = 0, end = 1;
        for (int i = 0; i < len - 1; ++i) {
            longestPalindrome(s, i, i, begin, end);
            longestPalindrome(s, i, i + 1, begin, end);
        }
        return s.substr(begin, end - begin);
    }
};

#endif //LEETCODE_SOLUTION_H
