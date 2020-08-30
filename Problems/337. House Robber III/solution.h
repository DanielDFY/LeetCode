#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <algorithm>
using std::max;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len < 2) return 0;

        int buy = -prices[0];
        int cooldown = 0;
        int sell = 0;
        int hold = -prices[0];

        for (int i = 1; i < len; ++i) {
            int oldHold = hold;
            int oldSell = sell;

            hold = max(buy, oldHold);
            sell = prices[i] + max(buy, oldHold);
            buy = cooldown - prices[i];
            cooldown = max(cooldown, oldSell);
        }

        return max(sell, cooldown);
    }
};

#endif //LEETCODE_SOLUTION_H