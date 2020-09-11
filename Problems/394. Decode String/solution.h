#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::stringstream;

class Solution {
public:
    string decodeString(string s) {
        int idx = 0;
        return decodeString(s, idx);
    }

private:
    string decodeString(const string& s, int& idx) {
        stringstream sstr;
        const int len = s.size();

        while (idx < len && s[idx] != ']') {
            if (!isdigit(s[idx])) {
                sstr << s[idx++];
            }
            else {
                int n = 0;
                while (idx < len && isdigit(s[idx]))
                    n = n * 10 + (s[idx++] - '0');

                ++idx;  // skip '['
                string sub = decodeString(s, idx);
                ++idx;  // skip ']'

                while (n > 0) {
                    sstr << sub;
                    --n;
                }
            }
        }

        return sstr.str();
    }
};

#endif //LEETCODE_SOLUTION_H