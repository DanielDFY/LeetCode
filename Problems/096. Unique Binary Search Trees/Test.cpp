#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Unique Binary Search Trees")
{
    Solution s;

    SECTION("normal input") {
        CHECK(s.numTrees(3) == 5);
    }
}