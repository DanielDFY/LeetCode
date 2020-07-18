#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;

class Solution {
public:
    int myAtoi(string str) {
        long result = 0;
        bool sign = true;

        size_t i = 0;
        size_t len = str.size();
        while (i < len && str[i] == ' ') ++i;

        if (i == len) {
            return 0;
        } else if (str[i] == '+') {
            ++i;
        } else if (str[i] == '-') {
            ++i;
            sign = false;
        }

        while (isdigit(str[i])) {
            result = result * 10 + (str[i] - '0');
            if (!sign && -result <= INT32_MIN) return INT32_MIN;
            else if (sign && result >= INT32_MAX) return INT32_MAX;
            ++i;
        }

        return sign ? result : -result;
    }
};

#endif //LEETCODE_SOLUTION_H
