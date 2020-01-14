#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution.h"

TEST_CASE("Add Two Numbers", "addTwoNumbers") {
    Solution s;

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    REQUIRE( s.findMedianSortedArrays(nums1, nums2) == 2.5);
}