#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Sort Colors")
{
    Solution s;

    SECTION("normal input") {
        vector<int> nums{ 2,0,2,1,1,0 };
        vector<int> ans{ 0,0,1,1,2,2 };
        s.sortColors(nums);
        CHECK(nums == ans);
    }
}