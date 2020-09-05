#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <unordered_map>
using std::unordered_map;

#include <queue>
using std::priority_queue;

#include <utility>
using std::pair;
using std::make_pair;

#include <algorithm>
using std::nth_element;

class Solution {
public:
	// using heap
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyCache;
        for (auto num : nums) ++frequencyCache[num];

        vector<int> ret;
        priority_queue<pair<int, int>> pq;
        const int pqLimit = frequencyCache.size() - k;

        for (const auto& kv : frequencyCache) {
            pq.push(make_pair(kv.second, kv.first));
            if (pq.size() > pqLimit) {
                ret.push_back(pq.top().second);
                pq.pop();
            }
        }

        return ret;
    }

    vector<int> topKFrequentSelect(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyCache;
        for (auto num : nums) ++frequencyCache[num];

        vector<pair<int, int>> numsWithFrequency;
        for (const auto& kv : frequencyCache) {
            numsWithFrequency.push_back(make_pair(-kv.second, kv.first));
        }

        nth_element(numsWithFrequency.begin(), numsWithFrequency.begin() + k - 1, numsWithFrequency.end());

        vector<int> ret;
        for (int i = 0; i < k; ++i) {
            ret.push_back(numsWithFrequency[i].second);
        }

        return ret;
    }
};

#endif //LEETCODE_SOLUTION_H