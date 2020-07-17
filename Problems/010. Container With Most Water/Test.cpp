#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Container With Most Water")
{
    Solution s;

    SECTION("normal input") {
        std::vector<int> v1{7, 2, 6, 1};
        CHECK( (s.maxArea(v1) == 12) );

        std::vector<int> v2{1, 2, 3};
        CHECK( (s.maxArea(v2) == 2) );

        std::vector<int> v3{ 1, 1, 1, 1 };
        CHECK((s.maxArea(v3) == 3));
    }

    SECTION("empty vector input") {
        std::vector<int> v;
        CHECK( (s.maxArea(v) == 0 ));
    }
}