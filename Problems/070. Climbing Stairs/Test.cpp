#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Climbing Stairs")
{
    Solution s;

    SECTION("normal input") {
        CHECK(s.climbStairs(0) == 0);

        CHECK(s.climbStairs(1) == 1);

        CHECK(s.climbStairs(2) == 2);
    	
        CHECK(s.climbStairs(10) == 89);
    }
}