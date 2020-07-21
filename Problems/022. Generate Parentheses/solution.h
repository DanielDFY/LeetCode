#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;

#include <string>
using std::string;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
		vector<string> ret;
		addParenthesis("", n, 0, ret);
		return ret;
    }

private:
	void addParenthesis(string str, int ln, int rn, vector<string>& results) {
		if (ln == 0 && rn == 0) {
			results.push_back(str);
		}

		if (ln > 0) {
			addParenthesis(str + "(", ln - 1, rn + 1, results);
		}

		if (rn > 0) {
			addParenthesis(str + ")", ln, rn - 1, results);
		}
	}
};

#endif //LEETCODE_SOLUTION_H