#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Search in Rotated Sorted Array")
{
    Solution s;

    SECTION("normal input") {
        vector<int> nums{ 4,5,6,7,0,1,2 };
		int target = 0;

        CHECK(s.search(nums, target) == 4);
    }

    SECTION("no valid index") {
        vector<int> nums{ 4,5,6,7,0,1,2 };
        int target = 3;

        CHECK(s.search(nums, target) == -1);
    }
}