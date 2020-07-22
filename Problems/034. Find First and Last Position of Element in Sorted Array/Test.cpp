#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Find First and Last Position of Element in Sorted Array")
{
    Solution s;

    SECTION("normal input") {
        vector<int> nums1{ 5,7,7,8,8,10 };
		int target1 = 8;
        vector<int> ans1{ 3, 4 };

        CHECK(s.searchRange(nums1, target1) == ans1);

        vector<int> nums2{ 5,7,7,8,8,10 };
        int target2 = 6;
        vector<int> ans2{ -1, -1 };

        CHECK(s.searchRange(nums2, target2) == ans2);
    }

    SECTION("single input") {
        vector<int> nums{ 1 };
        int target = 1;
        vector<int> ans{ 0, 0 };

        CHECK(s.searchRange(nums, target) == ans);
    }

    SECTION("two same number") {
        vector<int> nums{ 2, 2 };
        int target = 2;
        vector<int> ans{ 0, 1 };

        CHECK(s.searchRange(nums, target) == ans);
    }
}