#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Jump Game")
{
    Solution s;

    SECTION("normal input") {
        vector<int> nums1{ 2,3,1,1,4 };

        CHECK(s.canJump(nums1) == true);

        vector<int> nums2{ 3,2,1,0,4 };

        CHECK(s.canJump(nums2) == false);
    }
}