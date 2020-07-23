#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Permutations")
{
    Solution s;

    SECTION("normal input") {
        vector<int> integers { 1,2,3 };
        vector<vector<int>> ans{ {1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,2,1},{3,1,2} };

        CHECK(s.permute(integers) == ans);
    }
}