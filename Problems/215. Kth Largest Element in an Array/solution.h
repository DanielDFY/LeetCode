#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <queue>
using std::priority_queue;

#include <xstddef>
using std::greater;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int n : nums) {
            if (pq.size() < k) {
                pq.push(n);
            }
            else if (pq.top() < n) {
                pq.pop();
                pq.push(n);
            }
        }

        return pq.top();
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

#endif //LEETCODE_SOLUTION_H