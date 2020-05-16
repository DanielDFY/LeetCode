#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

class Solution {
public:
    int reverse(int x) {
        long result;
        for(result = 0; x != 0; x /= 10)
            result = result * 10 + x % 10;
        return (result > INT32_MAX) || (result < INT32_MIN) ? 0 : result;
    }
};

#endif //LEETCODE_SOLUTION_H
