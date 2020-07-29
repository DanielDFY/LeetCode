#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Subsets")
{
    Solution s;

    SECTION("normal input") {
        vector<int> nums{ 1,2,3 };
        vector<vector<int>> ans{ 
            {},
            {1},
            {2},
            {1,2},
            {3},
            {1,3},
            {2,3},
            {1,2,3}
        };
        CHECK(s.subsets(nums) == ans);
    }
}