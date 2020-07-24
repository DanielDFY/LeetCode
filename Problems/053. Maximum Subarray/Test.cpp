#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Maximum Subarray")
{
    Solution s;

    SECTION("normal input") {
        vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };

        CHECK(s.maxSubArray(nums) == 6);
    }

    SECTION("all negative input") {
        vector<int> nums{ -2,-3,-1,-5 };

        CHECK(s.maxSubArray(nums) == -1);
    }
}