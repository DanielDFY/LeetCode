#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>
using std::max;
using std::min;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>* pvm;
        vector<int>* pvn;
        int m, n;
        // insure m <= n
        if (nums1.size() <= nums2.size()) {
            pvm = &nums1;
            pvn = &nums2;
            m = nums1.size();
            n = nums2.size();
        } else {
            pvm = &nums2;
            pvn = &nums1;
            m = nums2.size();
            n = nums1.size();
        }
        vector<int>& vm = *pvm;
        vector<int>& vn = *pvn;

        int iMin = 0, iMax = m, mid = (m + n + 1) / 2;
        while (iMin <= iMax) {
            int i = (iMin + iMax) / 2;
            int j = mid - i;
            if (i < iMax && vn[j - 1] > vm[i]) {
                // i is too small
                iMin = i + 1;
            } else if (i > iMin && vm[i - 1] > vn[j]) {
                // i is too big
                iMax = i - 1;
            } else {
                // i is perfect
                int maxLeft = 0;
                if (i == 0) { maxLeft = vn[j - 1]; }
                else if (j == 0) { maxLeft = vm[i - 1]; }
                else { maxLeft = max(vm[i - 1], vn[j - 1]); }
                if ( (m + n) % 2 == 1 ) { return maxLeft; }

                int minRight = 0;
                if (i == m) { minRight = vn[j]; }
                else if (j == n) { minRight = vm[i]; }
                else { minRight = min(vn[j], vm[i]); }

                return (maxLeft + minRight) / 2.0;
            }
        }
        return 0.0;
    }
};
#endif //LEETCODE_SOLUTION_H
