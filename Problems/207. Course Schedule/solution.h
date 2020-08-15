#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> degrees(numCourses, 0);
        vector<int> bfs;
        for (const auto& edge : prerequisites) {
            graph[edge[1]].push_back(edge[0]);
            ++degrees[edge[0]];
        }
        for (int i = 0; i < numCourses; ++i)
            if (degrees[i] == 0) bfs.push_back(i);
        for (int i = 0; i < bfs.size(); ++i)
            for (int edgeTo : graph[bfs[i]])
                if (--degrees[edgeTo] == 0) bfs.push_back(edgeTo);
        return bfs.size() == numCourses;
    }
};

#endif //LEETCODE_SOLUTION_H