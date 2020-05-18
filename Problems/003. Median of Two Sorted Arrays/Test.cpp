#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Median of Two Sorted Arrays", "medianOfTwoSortedArrays") {
    Solution s;

    SECTION("normal input") {
        SECTION("odd numbers") {
            vector<int> nums1 = {1, 2, 3};
            vector<int> nums2 = {4, 5};

            CHECK( s.findMedianSortedArrays(nums1, nums2) == 3);
        }

        SECTION("even numbers") {
            vector<int> nums1 = {-1, 0};
            vector<int> nums2 = {2, 3};

            CHECK( s.findMedianSortedArrays(nums1, nums2) == 1);
        }
    }

    SECTION("input vector may be empty") {
        SECTION("one is empty") {
            vector<int> nums1 = {};
            vector<int> nums2 = {3, 4};

            CHECK( s.findMedianSortedArrays(nums1, nums2) == 3.5);
        }

        SECTION("both are empty") {
            vector<int> nums1 = {};
            vector<int> nums2 = {};

            CHECK( s.findMedianSortedArrays(nums1, nums2) == 0);
        }
    }
}