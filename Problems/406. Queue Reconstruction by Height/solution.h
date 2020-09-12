#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int num = people.size();

        sort(people.begin(), people.end(), [](vector<int>& lhs, vector<int>& rhs) {
            return (lhs[0] < rhs[0]) || (lhs[0] == rhs[0] && lhs[1] > rhs[1]);
            });

        int s = 1;
        int c = 1;

        while (s < num) {
            s *= 2;
            c += s;
        }

        vector<int> treeVec(c, 0);
        initTree(treeVec, 0);

        vector<vector<int>> result(num);

        for (const auto& person : people) {
            insert(person, treeVec, 0, person[1], result);
        }

        return result;
    }

private:
    int initTree(vector<int>& treeVec, int i) {
        if (i < treeVec.size()) {
            int left = initTree(treeVec, 2 * i + 1);
            int right = initTree(treeVec, 2 * i + 2);
            treeVec[i] = left;
            return left + right + ((left == 0 && right == 0) ? 1 : 0);
        } else {
            return 0;
        }
    }

    void insert(const vector<int>& person, vector<int>& treeVec, int i, int expected, vector<vector<int>>& result) {
        if (expected == 0 && i * 2 + 1 >= treeVec.size()) {
            result[i - (treeVec.size() - 1) / 2] = person;
        } else if (treeVec[i] > expected) {
            insert(person, treeVec, i * 2 + 1, expected, result);
            --treeVec[i];
        } else {
            insert(person, treeVec, i * 2 + 2, expected - treeVec[i], result);
        }
    }
};

#endif //LEETCODE_SOLUTION_H