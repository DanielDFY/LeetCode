#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Median of Two Sorted Arrays", "medianOfTwoSortedArrays") {
    Solution s;

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    REQUIRE( s.findMedianSortedArrays(nums1, nums2) == 2.5);
}