#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int ret = 0;
        for (int price : prices) {
            if (price < min)
                min = price;
            else if (price - min > ret)
                ret = price - min;
        }
        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H