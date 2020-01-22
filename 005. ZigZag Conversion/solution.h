#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;

class Solution {
public:
    string convert(string s, int numRows) {
        string result;

        if (s.size() <= numRows || numRows == 1) return s;

        // the length between each "straight column"
        int colGap = 2 * numRows - 2;

        // append result row by row
        for (int colIdx = 0, i = 0; i < numRows; i++) {
            // for each row, the first character is in the ith position of s;
            result += s[i];

            // the start position of each "straight column"
            colIdx = colGap;

            // while there is still character in the "tilted column":
            while (colIdx - i < s.size()) {
                int tiltedIdx = colIdx - i;     // the position of the character in the "tilted column"
                int straightIdx = colIdx + i;   // the position of the character in the "straight column"

                // if it is the first or the last row, tilted column overlaps the straight column, ignore!
                if (i != 0 && i != numRows - 1) {
                    // append the character in the tilted column
                    result += s[tiltedIdx];
                }

                // second: append the character in the straight column in the same row only if this position exists
                if (straightIdx < s.size()) {
                    result += s[straightIdx];
                }

                // increment colIndex to the next column
                colIdx += colGap;
            }
        }
        return result;
    }
};


#endif //LEETCODE_SOLUTION_H
