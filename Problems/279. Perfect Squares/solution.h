#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <queue>
using std::queue;

class Solution {
public:
    int numSquares(int n) {
        if (n <= 0)
            return 0;

        // perfectSquares contain all perfect square numbers which 
        // are smaller than or equal to n.
        vector<int> perfectSquares;
        // cntPerfectSquares[i - 1] = the least number of perfect 
        // square numbers which sum to i.
        vector<int> cntPerfectSquares(n);

        // Get all the perfect square numbers which are smaller than 
        // or equal to n.
        for (int i = 1, squared = 1; squared <= n; ++i, squared = i * i) {
            perfectSquares.push_back(squared);
            cntPerfectSquares[squared - 1] = 1;
        }

        // If n is a perfect square number, return 1 immediately.
        if (perfectSquares.back() == n) {
            return 1;
        }

        // Consider a graph which consists of number 0, 1,...,n as
        // its nodes. Node j is connected to node i via an edge if  
        // and only if either j = i + (a perfect square number) or 
        // i = j + (a perfect square number). Starting from node 0, 
        // do the breadth-first search. If we reach node n at step 
        // m, then the least number of perfect square numbers which 
        // sum to n is m. Here since we have already obtained the 
        // perfect square numbers, we have actually finished the 
        // search at step 1.
        queue<int> searchQ;
        for (auto& i : perfectSquares) {
            searchQ.push(i);
        }

        int currCntPerfectSquares = 1;
        while (!searchQ.empty()) {
            ++currCntPerfectSquares;

            int searchQSize = searchQ.size();
            for (int i = 0; i < searchQSize; i++) {
                int tmp = searchQ.front();
                // Check the neighbors of node tmp which are the sum 
                // of tmp and a perfect square number.
                for (auto& j : perfectSquares) {
                    int sum = tmp + j;
                    if (sum == n) {
                        // We have reached node n.
                        return currCntPerfectSquares;
                    }
                    else if ((sum < n) && (cntPerfectSquares[sum - 1] == 0)) {
                        // If cntPerfectSquares[tmp + j - 1] > 0, this is not 
                        // the first time that we visit this node and we should 
                        // skip the node (tmp + j).
                        cntPerfectSquares[sum - 1] = currCntPerfectSquares;
                        searchQ.push(sum);
                    }
                    else if (sum > n) {
                        // We don't need to consider the nodes which are greater ]
                        // than n.
                        break;
                    }
                }

                searchQ.pop();
            }
        }

        return 0;
    }
};

#endif //LEETCODE_SOLUTION_H