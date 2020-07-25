#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Merge Intervals    ")
{
    Solution s;

    SECTION("normal input") {
        CHECK(s.uniquePaths(3, 2) == 3);

        CHECK(s.uniquePaths(7, 3) == 28);
    }
}